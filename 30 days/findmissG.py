#User function Template for python3

class Solution:
    def findTwoElement( self,arr, n): 
        # code here
        visited = set()
        repeated = None
        for i in range(n):
            if arr[i] in visited:
                repeated = arr[i]
            else:
                visited.add(arr[i])
                
        totalsum= n*(n+1)//2
        sumArr = sum(visited)
        miss = totalsum - sumArr
        return repeated,miss
    
# Driver code
if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc=tc-1
# } Driver Code Ends