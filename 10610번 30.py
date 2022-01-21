#!/usr/bin/env python
# coding: utf-8

# In[55]:


N = list(map(int, input()))

N.sort(reverse=True)

if sum(N) % 3 == 0 and 0 in N:
    print(*N, sep='')
else:
    print(-1)

