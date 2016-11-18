m,n,a=raw_input().split()
m=int(m)
n=int(n)
a=int(a)
r=c=0
if m%a==0:
    r=m/a
else:
    r=m/a +1
if n%a==0:
    c=n/a
else:
    c=n/a +1
print r*c
