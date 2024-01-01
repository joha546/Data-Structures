from sys import *
from collections import *
from math import *

def largestElement(arr: [], n: int) -> int:

    # Write your code from here using max function in python
    return max(arr)


# by traversing using loop

def largest(arr: [], n: int) ->int:
    
    maximum=0
    for i in range(n):
        if(maximum < arr[i]):
            maximum = arr[i]
    
    return maximum