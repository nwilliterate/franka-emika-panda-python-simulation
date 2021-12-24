# franka-emika-panda-python-simulation
 This repository simulates the Franka Emika Panda robot in Python using the Runge-Kutta method. To simulate the dynamics of a Panda  robot in Python, it is created as a C/C++ function using a coder in MATLAB. It is a method of building the following DLL (dynamic library) and loading it using the ctypes module in Python.
 
This method can quickly perform robot simulations that require a lot of computation in Python. However, since the DLL (dynamic library) is available only in the Windows, it seems that you need to use a different method to use it in other OS.

This repository can be used for robot dynamics learning.

The folder structure is as follows.
└ c++: a project that creates a DLL file.
└ matlab: Panda robot model in MATLAB with Runge-Kutta method.
└ python: panda robot simulation via DLL file
  └ dll_test.py: panda robot simulation via DLL file (implemented with simple pid control)
