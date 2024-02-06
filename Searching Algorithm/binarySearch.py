"""
Given a sorted array of size N and an integer K, find the position(0-based indexing)
at which K is present in the array using binary search.
"""
class Solution:
    def binarysearch(self, arr, n, k):
        low, high = 0, n-1
        while low <= high:
            mid = (low+high)//2
            if arr[mid]==k:
                return mid
            elif arr[mid]<k:
                low=mid+1
            else:
                high=mid-1
        return -1
    
if __name__ == '__main__':
    arr=list(map(int, input().strip().split(' ')))
    k=int(input())
    n=len(arr)
    ob = Solution()
    print (ob.binarysearch(arr, n, k))