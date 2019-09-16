import numpy as np
import math
import matplotlib.pyplot as plt
from numpy.random import RandomState

r = RandomState()

nexp = 10000 # number of experiments
nsam = 100   # number of samples in each experiment

# initialize array to hold experiment results
exp_results = np.zeros(nexp)

# now conduct nexp experiments with nsam samples
for exp in range(nexp):
    x = r.randn(nsam)
    exp_results[exp] = x.mean()

fr = exp_results.mean()
fe = exp_results.std()
ee = 1./math.sqrt(nsam)  # expected error on the mean

print ('Final results')
print ('mean  = {0:8.5f} Expected = 0'.format(fr))
print ('error = {0:8.5f} Expected = {1:8.5f}'.format(fe,ee))

my_bins = np.linspace(-1.,1.,101)
plt.hist(exp_results, bins=my_bins, density=True);
plt.xlabel('Experiment Mean')
plt.ylabel('Bin Probability')
plt.title('{0:d} Experiments with {1:d} Samples'.format(nexp,nsam))
plt.text(-1,3.2, 'Mean: {0:8.5f}'.format(fr))
plt.text(-1,3,'Error: {0:8.5f}'.format(fe))
plt.show()
