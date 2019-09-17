
# Second order Differential Equation Falling Ball
# using Runge - Kutta

import numpy as np
import matplotlib.pyplot as plt

# set parameters
g = 9.8
X0 = 0.
V0 = 0.
dt = 2.
tfinal = 100.

# initialize arrays
t = np.arange(0.,tfinal+dt,dt)
npoints = len(t)
X = np.zeros(npoints)
V = np.zeros(npoints)
XExact = X0 + V0*t - 0.5*g*t**2

# Second Order Runge Kutta Solution
X[0] = X0
V[0] = V0
for i in range(npoints-1):
    # compute midpoint velocity
    Vmid = V[i] - 0.5*g*dt
    # use midpoint velocity to advance position
    X[i+1] = X[i] + Vmid*dt
    V[i+1] = V[i] - g*dt

# plot the results
#plt.ion()
plt.plot(t,X,'mo',label='Euler')
plt.plot(t,XExact,'k',label='Exact')
plt.xlabel('t (s)')
plt.ylabel('X (m)')
plt.title('Second order Diff Equation Falling Ball w/ Runge-Kutta')
plt.legend()
plt.show()