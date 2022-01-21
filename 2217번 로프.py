#!/usr/bin/env python
# coding: utf-8

# In[27]:


N = int(input())
max_weight = []
ans = []

for i in range(N):
        max_weight.append(int(input()))


max_weight.sort(reverse=True)

for i in range(len(max_weight)):
    ans.append((i+1) * max_weight[i])
    
print(max(ans))

