# your code goes here
b=input()
n=ct=0
flag=0
a=[4,7,44,77,47,74,447,477,744,747,774,474,444,777]	
for i in a:
	if b%i==0:
		flag=1
		break
while b!=0:
	n+=1
	if b%10==4 or b%10==7:
		ct+=1
	#print ct,n,b	
	b=b/10	
if ct==n :
	flag=1
if flag==0:
	print 'NO'
else:
	print "YES"
