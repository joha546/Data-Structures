'''  we call a function to reverse a string, which iterates to every element and intelligently joins each character 
in the beginning so as to obtain the reversed string. 

Time complexity: O(n) 
Auxiliary Space: O(1) 
'''

def reverse(s):
	str = ""
	for i in s:
		str = i + str
	return str

s = "I am Joha"

print("The original string is : ", end="")
print(s)

print("The reversed string(using loops) is : ", end="")
print(reverse(s))


# Using reversed() function

def rev(string):
    string = "".join(reversed(string))
    return string

string1="So"
print(rev(string1))

''' 
Time complexity: O(n) 
Auxiliary Space: O(n) 
'''