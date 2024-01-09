'''Syntax : int(string, base)

Parameter : This function take following parameters :

string : consists of 1’s, 0’s or hexadecimal ,octal digits etc.
 
base : (integer value) base of the number.
Returns : Returns an integer value, which is equivalent 
of string in the given base.

'''

string = "100"
print(type(string)) 
 
string_to_int = int(string) 

print(type(string_to_int))

'''By default, int() expect that the string argument represents a decimal integer. Assuming, in any case, you pass 
a hexadecimal string to int(), then it will show ValueError. In such cases, you can specify the base of the number
in the string.
'''

str1="0x12F"
print(type(str1))

new_str1= int(str1,base=16)
print(type(new_str1))
