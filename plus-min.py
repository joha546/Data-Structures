#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    count1 = 0
    count2 = 0
    count3 = 0

    for i in range(len(arr)):
        if arr[i] > 0:
            count1 += 1
        elif arr[i] == 0:
            count2 += 1
        elif arr[i] < 0:
            count3 += 1

    total = len(arr)
    x=count1/total
    y=count2/total
    z=count3/total
    print("{:0.6f}".format(x))
    print("{:0.6f}".format(z))
    print("{:0.6f}".format(y))


if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
