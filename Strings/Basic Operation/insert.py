
# How to insert characters in a string at a certain position?

'''
Iterate over the string and keep track of the count of the characters in the string so far and whenever your count
becomes equal to the element in the array of stars, append a star to the resultant string and move ahead in your
star array.
'''

def addStars(s, stars):
    ans = ""
    j=0
    
    for i in range(len(s)):
        if(j<len(stars) and i==stars[j]):
            ans +="*"
            j +=1
        ans +=s[i]
    
    return ans

string = input()
chars= [1,3,5,7,9]
ans = addStars(string, chars)
print(ans)

'''
Time Complexity: O(N)
Auxiliary Space: O(N)
'''