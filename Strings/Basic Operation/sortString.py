def sortString(str):
    str = ''.join(sorted(str))
    print(str)

s = input()
sortString(s)

''' 
Time Complexity: O(n log n), where n is the length of string.
Auxiliary Space: O( 1 ).
'''

