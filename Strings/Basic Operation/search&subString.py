'''
Searching a Character in the String
It searches the index of specified characters within a given string. It starts searching from the beginning to the 
end of the string (from left to right) and returns the corresponding index if found otherwise returns -1.

Parameters: 

The character to be searched
An integer from where searching
'''


string = input()

first_index = string.find('s')
print(f"First occurance of char 's' is found at: {first_index}")

# returns index of the last occurance of the character
last_index= string.rfind('s')

# Index of the first occurrence of the character after the specified index if found.
first_in = string.find('s', 10)
print(f"First occurrence of char 's' after index 10: {first_in}")

last_in = string.rfind('s', 20)
print(f"Last occurrence of char 's' after index 20 is: {last_in}")

# Gives ASCII value of character at location 20

char_at = ord(string[20])
print(char_at) 