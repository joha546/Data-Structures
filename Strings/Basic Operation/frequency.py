'''
The approach is very simple we are go on traversing and print the all the char with there frequency.
'''

MAX = 26
def compress(s,n):
    freq = [0]*MAX;
    
    for i in range(n):
        freq[ord(s[i]) - ord('a')] +=1;
        
    for j in range(MAX):
        if (freq[i]==0):
            continue;
        
        print((chr)(i+ord('a')), freq[i],end=" ");

if __name__== "__main__" :
    s = input()
    n = int(input())
    
    compress(s,n)
    