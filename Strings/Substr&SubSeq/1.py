'''Suppose we are given a string s1, we need to the find total number of substring(including multiple occurrences 
of the same substring) of s1 which are present in string s2. '''

def countSub(s1,s2):
    ans=0
    for i in range(len(s1)):
        s3=""
        for j in range(i,len(s1)):
            s3+=s1[j]
            if s2.find(s3) != -1:
                ans+=1
    return ans


s1=input()
s2=input()
print(countSub(s1,s2))