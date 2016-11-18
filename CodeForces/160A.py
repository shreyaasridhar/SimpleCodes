n = input()
a = map(int, raw_input().split())
a.sort()
j = len(a) - 1
i = 0
sum1 = a[i]
sum2 = a[j]
if n > 1:
    while abs(i - j) != 1:
        if sum2 > sum1:
            i += 1
            sum1 += a[i]
        else:
            j -= 1
            sum2 += a[j]
    if sum2 > sum1:
        print n - j
    else:
        print n - j + 1
else:
    print 1

