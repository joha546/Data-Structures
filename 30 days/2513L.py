# bruteforce

class Solution:
    def minimizeSet(self, divisor1: int, divisor2: int, uniqueCnt1: int, uniqueCnt2: int) -> int:
        def lcm(a,b):
            return a*b // math.gcd(a,b)
        
        divlcm = lcm(divisor1,divisor2)

        def findInt(divisor,count):
            result=[]
            num=1
            while (len(result)<count):
                if num%divisor != 0:
                    result.append(num)
                    num +=1
            return result

        arr1 = findInt(divisor1,uniqueCnt1)
        arr2 = findInt(divisor2, uniqueCnt2)

        minMax = max(arr1[-1],arr2[-1])
        return minMax
    
    
# Optimal approach.

import math

class Solution:
  def minimizeSet(self, divisor1: int, divisor2: int, uniqueCnt1: int, uniqueCnt2: int) -> int:
    divisorLcm = math.lcm(divisor1, divisor2)
    l=0
    r=2**31-1

    def isPossible(m: int) -> bool:
      cnt1=m-m//divisor1
      cnt2 =m-m//divisor2
      totalCnt =m-m//divisorLcm
      return cnt1 >=uniqueCnt1 and cnt2 >=uniqueCnt2 and \
          totalCnt >=uniqueCnt1+uniqueCnt2

    while l<r:
      m =(l+r)//2
      if isPossible(m):
        r=m
      else:
        l=m+1

    return l 