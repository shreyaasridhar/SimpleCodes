n,t=raw_input().split()
n=int(n)
t=int(t)
a=raw_input()
arr=[]
for i in a:
	arr.append(i)

for i in range(t):
	ind=[]
	
	for j in range(1,n):
		if arr[j]=='G' and arr[j-1]=='B':
			ind.append(j)
	
	for j in ind:
		arr[j]='B'
		arr[j-1]='G'		
print "".join(arr)