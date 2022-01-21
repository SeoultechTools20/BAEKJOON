#!/usr/bin/env python
# coding: utf-8

# In[17]:


S = int(input())

i = 1
count = 0

while S >= 0:
    S -= i
    i += 1
    count += 1

print(count - 1)

