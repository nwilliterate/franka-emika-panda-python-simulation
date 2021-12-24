from ctypes import *
import numpy as np
import matplotlib.pyplot as plt


class franka_dll(object):
    def __init__(self, path):
        self.dll = WinDLL(path)
        self.rk_func = self.dll['rk']
        self.cori_func = self.dll['get_CoriolisVector']
        self.plant_func = self.dll['plant']

        self.rk_func.argtypes = [
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS'),
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS'),
            c_double,
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS')]
        self.cori_func.argtypes = [
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS'),
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS'),
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS')]
        self.plant_func.argtypes = [
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS'),
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS'),
            np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags='C_CONTIGUOUS')]
        self.rk_func.restype = None
        self.cori_func.restype = None
        self.plant_func.restype = None

    def rk(self, state, input):
        """ Franka Emika Robot Model using Runge Kutta Method
        :param state: (double 14x1) joint position and velocity
        :param input: (double 7x1) control input tau
        :param T: (double) sampling time (Default = 0.001)
        :return: next_state (double 14x1): next joint position and velocity
        """
        state = state.reshape(-1, ).astype(np.float64)
        input = input.reshape(-1, ).astype(np.float64)
        next_state = np.zeros(14).astype(np.float64)
        self.rk_func(state, input, 0.001, next_state)
        return next_state

    def getCoriolisVector(self, q, qd):
        """ Coriolis Vector(double 7x1) = Coriolis Matrix(double 7x7) * Joint Velocity(double 7x1)
        :param q : (double 7x1) Joint Position
        :param qd: (double 7x1) Joint Velocity
        :return: (dobule 7x1) Coriolis Vector
        """
        q = q.reshape(-1, ).astype(np.float64)
        qd = qd.reshape(-1, ).astype(np.float64)
        x = np.zeros(14).astype(np.float64)
        self.cori_func(q, qd, x)
        return x

    def plant(self, state, input):
        """ Franka Emika Robot Model
        :param state: (double 14x1) joint position and velocity
        :param input: (double 7x1) control input tau
        :return: next_state (double 14x1): next joint position and velocity
        """
        state = state.reshape(-1, ).astype(np.float64)
        input = input.reshape(-1, ).astype(np.float64)
        next_state = np.zeros(14).astype(np.float64)
        self.plant_func(state, input, 0.001, next_state)
        return x


# Parameters
root_path = ".\\"
file_name = "franka_rk.dll"
franka_dll = franka_dll(root_path + file_name)
max_episodes = 10000
p_gain = [600, 600, 600, 600, 250, 150, 15]
d_gain = [5, 5, 5, 5, 3, 2.5, 1.5]

# init state
state = np.array([0.0001508367, -0.7852843, 5.302422e-05, -2.356662, -0.0002357623, 1.570977, 0.7851743,
         0, 0, 0, 0, 0, 0, 0])
# state = np.zeros(shape=(14, 1))
input = np.zeros(7)


positions = []

# Simulation
for i_episode in range(1, max_episodes):
    for i in range(0, 7):
        input[i] = p_gain[i] * -state[i] + d_gain[i] * -state[i+7]
    next_state = franka_dll.rk(state, input)
    state = next_state

    positions.append(state[0:7])

positions = np.array(positions)

# Plotting
fig = plt.figure()
for i in range(0, 7):
    ax = fig.add_subplot(7, 1, i+1)
    ax.plot(positions[:, i], 'b--')
plt.show()
