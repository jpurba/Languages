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
d1=int(d1)
#Convert datetime and add some usefull columns
dt = pd.to_datetime(dt)
print(dt.week)
print(dt.year)
data['Date/Time'] = data['Date/Time'].map(pd.to_datetime)

def get_dom(dt):
    dt = data['Date/Time']:0;