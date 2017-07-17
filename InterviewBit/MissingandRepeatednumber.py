def repeatedNumber(A):
        sumOfA = 0
        sumOfA2 = 0
        n = 0
        for a in A:
            sumOfA2 += a*a
            sumOfA += a
            n += 1
        sumOfN = n*(n+1)/2
        retA = sumOfN - sumOfA
        
        retB = (sumOfN*(2*n+1)/3 - sumOfA2)/retA
        x = (retB-retA)/2
        return [x,x + retA]

a=repeatedNumber([4, 3, 6, 2, 1, 1]) 
print a