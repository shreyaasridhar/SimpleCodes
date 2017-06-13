t=input()
for j in range(t):
	u,v=raw_input().split()
	u=int(u)
	v=int(v)
	r=u+1
	for i in range (0,u+v+1):
		r+=i
	print r