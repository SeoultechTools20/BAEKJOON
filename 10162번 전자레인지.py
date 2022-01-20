#!/usr/bin/env python
# coding: utf-8

# In[44]:


T = int(input())

A = 300
B = 60
C = 10

A_count = 0
B_count = 0
C_count = 0

ans = 0

while True:
    if T >= A:
        T = T-300
        A_count += 1
    elif T >= B:
        T = T - 60
        B_count += 1
    elif T >= 10:
        T = T - 10
        C_count += 1
    elif T == 0:
        break
    else:
        ans = -1
        print(ans)
        break
        
if ans != -1:
    ans = [A_count, B_count, C_count]
    for i in range(len(ans)):
        print(ans[i], end =' ')

