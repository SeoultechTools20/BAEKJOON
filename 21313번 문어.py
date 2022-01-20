#!/usr/bin/env python
# coding: utf-8

# In[ ]:


N = int(input())

sequence = [1, 2]

if N % 2 == 0:
    ans = sequence * (N // 2)
else: 
    ans = sequence * (N // 2) + [3]
    
    
print(*ans)

