# franka-emika-panda-python-simulation
 This repository simulates the Franka Emika robot in Python using the Runge-Kutta method. To simulate the dynamics of a robot in Python, create it as a C/C++ function using a coder in matlab, This is the code that builds this as a dll (dynamic library) and then loads it using the ctypes module of Python. This approach can improve the performance problem of Dynamics Simulation, where Python's slow performance requires a lot of computation. However, since the dll (dynamic library) is available only in the Windows environment, it seems that you need to use a different method to use it in other ubuntu.


The attached files are as follows.
Franka_Model_RK_Simulation
└ c++: a project that creates a dll file
└ matlab: file that simulates Franka robot model in matlab with RK
└ python: file that simulates franka dynamics in python via dll file
  └ dll_test.py: code to simulate franka_emika robot via dll file (implemented with simple pid control)
