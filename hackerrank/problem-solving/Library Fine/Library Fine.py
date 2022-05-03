# Question Source: "HackerRank (Prepare --> Problem Solving --> Algorithms)"
# Problem URL: "https://www.hackerrank.com/challenges/library-fine/problem"
# Solution by: "https://github.com/pawansinghpks01"
# Difficulty: "Easy"

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'libraryFine' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER d1
#  2. INTEGER m1
#  3. INTEGER y1
#  4. INTEGER d2
#  5. INTEGER m2
#  6. INTEGER y2
#

#Its a simple question
#Trick here is that since return date can be smaller than the due date also, make sure to retrun 0 in those cases

def libraryFine(d1, m1, y1, d2, m2, y2):
    # Write your code here
    
    #if years are not same
    if y1!=y2:
        #if returned year is greater than due year
        if y1>y2:
            return 10000
        #if returned year is smaller than the returned year    
        else:
            return 0
    #if years are same
    else:
        #if months are different
        if m1!=m2:
            #if returned month is greater than due month
            if m1>m2:
                return (m1-m2)*500
            #if returned month is smaller than due month
            else:
                return 0
        #if both month and year are same
        else:
            #if returned date is greater than the due date
            if d1>d2:
                return (d1-d2)*15
            #if returned date is less or equal to the due date
            else:
                return 0
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    d1 = int(first_multiple_input[0])

    m1 = int(first_multiple_input[1])

    y1 = int(first_multiple_input[2])

    second_multiple_input = input().rstrip().split()

    d2 = int(second_multiple_input[0])

    m2 = int(second_multiple_input[1])

    y2 = int(second_multiple_input[2])

    result = libraryFine(d1, m1, y1, d2, m2, y2)

    fptr.write(str(result) + '\n')

    fptr.close()
