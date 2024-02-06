"""
Given an array Arr of N elements and a integer K. Your task is to return the position of first occurence of K in the given array.
Note: Position of first element is considered as 1.
"""

class Solution:
    def search(self, arr, n, k):
        # code here
        for i in range(n):
            if arr[i] == k:
                return i+1
        return -1

if __name__ == "__main__":
    n, k=map(int, input().strip().split())
    arr=list(map(int, input().strip().split()))
    ob = Solution()
    ans = ob.search(arr, n, k)
    print(ans)