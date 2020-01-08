#!/usr/bin/env python
# coding: utf-8

# In[16]:


get_ipython().run_line_magic('pylab', 'inline')
import pandas as pd
import seaborn as sb


# In[17]:


data = pd.read_csv('uber-raw-data-apr14.csv')


# In[18]:


data


# In[19]:


data['Date/Time']


# In[20]:


data.head()


# In[21]:


data.tail()


# In[22]:


dt = 4/30/2014


# In[23]:


dt = '4/30/2014 23:22:00'


# In[24]:


d, t = dt.split(' ')
print(d)
print(t)


# In[25]:


m,d,y = d.split('/')


# In[26]:


m
d
y


# In[27]:


m


# In[28]:


d


# In[29]:


d1=int(d)


# In[30]:


d1


# In[31]:


dt


# In[32]:


dt.month


# In[33]:


dt = pd.to_datetime(dt)


# In[34]:


dt


# In[35]:


dt.month


# In[36]:


dt.year


# In[37]:


dt.week


# In[38]:


data['Date/Time'] = data['Date/Time'].map(pd.to_datetime)


# In[39]:


data.head()


# In[40]:


data['Date/Time']


# In[49]:


def get_dom(dt):
    return dt.day

data['dom'] = data['Date/Time'].map(get_dom)


# In[46]:


dt = data['Date/Time'][500000]


# In[48]:


dt.day


# In[47]:


dt = data['Date/Time'][500000]


# In[50]:


data.tail()


# In[55]:


def get_weekday(dt):
    return dt.weekday()

data['weekday'] = data['Date/Time'].map(get_weekday)


# In[56]:


data.tail()


# In[57]:


def get_hour(dt):
    return dt.hour

data['hour'] = data['Date/Time'].map(get_hour)


# In[58]:


data.tail()


# #analysis

# In[64]:


hist(data.dom)


# In[65]:


hist(data.dom, bins=30)


# In[67]:


hist(data.dom, bins=40)


# In[72]:


hist(data.dom, bins=30, width=.8, range=[0.5, 30.5])
xlabel('date of the month')
ylabel('frequency')
title('Frequency by DoM - uber - Apr 2018')


# In[75]:


for k, rows in data.groupby('dom'):
    print((k, rows))
    break
    #print((k, len(rows)))


# In[77]:


#for k, rows in data.groupby('dom'):
    #print((k, len(rows)))

def count_rows(rows):
    return len(rows)

by_date = data.groupby('dom').apply(count_rows)
by_date


# In[78]:


plot(by_date)


# In[79]:


bar(range(1,31), by_date)


# In[80]:


by_date_sorted = by_date.sort_values()
by_date


# In[81]:


by_date_sorted


# In[84]:


bar(range(1,31), by_date_sorted)
xticks(range(1,31), by_date_sorted.index)
xlabel('date of the month')
ylabel('frequency')
title('Frequency by DoM - uber - Apr 2018')
("")


# In[85]:


# analysis the hour


# In[88]:


hist(data.hour, bins=24, range=(.5, 24))


# In[89]:


# analyze the weekday


# In[90]:


hist(data.weekday, bins=7, range=(.5,7), rwidth=.8, color='green')


# In[ ]:




