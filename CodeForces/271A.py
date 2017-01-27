def distinct(n):
	a= [int(x) for x in str(n)]
	if(len(a)==len(set(a))):
		return True
	else:
		return False
	
		
a=[]
n=input()
n+=1
while(distinct(n)!=True):
	n+=1
print n	
