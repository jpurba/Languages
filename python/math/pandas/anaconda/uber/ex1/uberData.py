# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
#pylab inline
import pandas as pd
import seaborn as sb

#load file into memory
data = pd.read_csv('uber-raw-data-apr14.csv')
data
data['Date/Time']
data.head()
data.tail()
dt = '4/30/2014 23:22:00'
d, t = dt.split(' ')
print(d)
print(t)
m,d1,y = d.split('/')
print(m)
print(d1)
print(y)
