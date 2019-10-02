# -*- coding: utf-8 -*-
"""
Created on Wed Oct  2 13:59:40 2019

@author: jpurba
"""
from matplotlib import pyplot as plt
from matplotlib import style
import numpy as np

style.use('ggplot')

#unpack to numpy array
a,b = np.loadtxt('csvEx.csv',
                 unpack = True,
                 delimiter = ',')

x = [2,4,6,8]
y = [7,3,8,3]

x2 = [1,3,5,7]
y2 = [6,7,2,6]

plt.bar(x,y,color='c', align = 'center')
plt.bar(x2,y2,color='g', align = 'center')

plt.title('Epic Chart')
plt.ylabel('Y axis')
plt.xlabel('X axis')

plt.show()

# work on csv file
print(a)
print(b)

plt.plot(a,b)

plt.title('Plot CSV file Chart')
plt.ylabel('Y axis')
plt.xlabel('X axis')

plt.show()
