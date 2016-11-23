n=raw_input()
x='hello'
j=0
n=n.lower()
for i in n:
	if j<len(x):
		if i==x[j]:
			#print j,x[j],i
			j+=1
if j==len(x):
	print 'YES'
else:
	print "NO"
	
