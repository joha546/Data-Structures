#Your task is to complete this function
#Function should return complete string
def encode(arr):
    # Code here
    if not arr:
        return ""
    encoded=""
    count=1
    for i in range(1,len(arr)):
        if arr[i] == arr[i-1]:
            count +=1
        else:
            encoded += arr[i-1] + str(count)
            count =1
    encoded +=arr[-1] + str(count)
    
    return encoded

# Driver Code Starts
#Your code will prepended here
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        arr=input().strip()
        print (encode(arr))