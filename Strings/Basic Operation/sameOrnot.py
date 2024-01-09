

# Python Program to check if two strings are same or not?

def is_sameOrnot(a,b):
    if a !=b:
        return 0
    else:
        return 1
    
s1 = input()
s2 = input()
result = is_sameOrnot(s1,s2)

if result == 0:
    print("Not Equal")
else:
    print("Strings are Equal")