# Show on how to plot
import numpy as np
import scipy as sp
import matplotlib.pylab as plt
from numpy.random import RandomState

sp.version.version
#'1.3.1'

t = sp.linspace(0,1,100)
plt.plot(t**2)
#plt.show() # show only the first figure

# make arrays of random number
r = RandomState()
n = 100000
x = r.randn(n)   # normal distribution
z = r.rand(n)    # uniform distribution

#plt.ion()

plt.figure(2)    # simple histogram with 20 bins
plt.hist(x, bins=20)
plt.xlabel('Value')
plt.ylabel('Number')
plt.title('{0:d} Normally Distributed Random Numbers'. format(n))
#plt.show()

plt.figure(3)   # normalized histogram with bins set by user
my_bins = np.linspace(-5.,5.,101)
plt.hist(x,bins=my_bins,density=True,label='Gaussian');
plt.hist(z,bins=my_bins,density=True,alpha=0.5,label='Uniform');
plt.xlabel('Value')
plt.ylabel('Bin Probability')
plt.title('{0:d} Random Numbers'.format(n))
plt.legend()
plt.show()  # Put this at the end to show all of the plot all together
