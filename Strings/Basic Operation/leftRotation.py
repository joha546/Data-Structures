def leftrotate(s,d):
    temp = s[d:] + s[0:d]
    return temp

def rightrotate(s,d):
    return leftrotate(s,len(s)-d) 
    
if __name__=="__main__":
    
    str1= input()
    n = int(input())
    print(leftrotate(str1,n))
    
    str2= input()
    print(rightrotate(str2,n))
    

'''
Time Complexity: O(N), where N is the size of the given string.
Auxiliary Space: O(1), no extra space is required, so it is a constant.
'''

'''
Approach#2: Using deque
Algorithm
1. Define two functions for left rotation and right rotation.
2. Convert the input string to a deque using the collections module.
3. To perform left rotation, use the rotate() method with a negative rotation point.
4. To perform right rotation, use the rotate() method with a positive rotation point.
5. Convert the deque back to a string using the join() method.
6. Return the rotated string.
'''

from collections import deque

def left_rotate(s,d):
    char_deque = deque(s)
    char_deque.rotate(-d)
    return ''.join(char_deque)

def right_rotate(s,d):
    char_deque = deque(s)
    char_deque.rotate(-d)
    return ''.join(char_deque)

string1 = input()
string2 = input()
n1 = int(input())
n2 = int(input())
print(left_rotate(string1,n1))