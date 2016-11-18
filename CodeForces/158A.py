n,k=raw_input().split()
n=int(n)
k=int(k)
a=map(int,raw_input().split())
ct=0
for i in a:
    if i>a[k-1] or i==a[k-1] and i>0:
        ct+=1
print ct        
