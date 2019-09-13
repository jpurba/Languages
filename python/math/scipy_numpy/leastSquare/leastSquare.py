import numpy as np
import math
import matplotlib.pyplot as plt

# simple example of Least Squares fit
npar=2

# vector with data (y); std of measurement error is sigma = .1
sigma = 0.1
Y = np.array([0.05, 0.88, 2.06, 2.95, 4.13])
print("Y = " , Y)

# X is positions of data
X = np.array([0., 1., 2., 3., 4.]);
nobs = len(X)
print("X = ", X)

# creates M - ones in first col, X in second col.
M = np.column_stack( (np.ones(nobs),X) )

print("M = ", M)

# solve
MIM = np.dot(M.transpose(),M)
print("MIM = ", MIM)
MIMINV = np.linalg.inv(MIM)
print("MIM inverse = ", MIMINV)
MTY = np.dot(M.transpose(),Y)
print("MTY = ", MTY)

P = np.dot(MIMINV,MTY)   # solution
print("P = ", P)
C = MIMINV * sigma**2    # covariance matrix
print("C = ", C)

# print solution
print('Intercept= %f +/- %f'%(P[0],math.sqrt(C[0,0])))
print('slope    = %f +/- %f'%(P[1],math.sqrt(C[1,1])))

# compute RMS and print it
Residuals = Y - np.dot(M,P)
ChiSq = np.dot(Residuals.transpose(),Residuals)
RMS = math.sqrt(ChiSq/nobs)
print ('RMS = %f' %(RMS))

# plot the result of the fit
#plt.ion()
plt.plot(X,Y,'o',markersize=10)
xx = np.linspace(-0.5,4.5,101)
ModelY = P[0] + P[1]*xx
plt.plot(xx,ModelY,'k')
plt.xlabel('X')
plt.ylabel('Y')
plt.title('Linear Least Squares Example')
plt.grid('on')
plt.show()