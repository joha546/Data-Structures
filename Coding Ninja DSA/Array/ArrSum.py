# your code goes here
n = int(input())
arr = list(map(int, input().strip().split()))
sumArr = 0
for i in range(n):
    sumArr +=arr[i]
print(sumArr)