# Question Source: "HackerRank (Project Euler)"
# Problem URL: "https://www.hackerrank.com/contests/projecteuler/challenges/euler003/problem"
# Solution by: "https://github.com/pawansinghpks01"

import sys
import math
t = int(input().strip())
for a0 in range(t):
    f = 0
    n = int(input().strip())
    while(n%2 == 0):
        f = 2
        n = n//2
    i = 3
    while(i <= math.sqrt(n)):
        f = i
        while(n%i == 0):
            n = n//i
        i = i+2
    
    if(n>2):
        f = n
    print(f)