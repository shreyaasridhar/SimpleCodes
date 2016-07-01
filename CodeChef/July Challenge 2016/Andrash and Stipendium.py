t=input()
if t<=40:
	for i in range(0,t):
		no=input()
		if no>1 and no<100000:
			a=[]
			a=map(int,raw_input().split())
			ct=0
			for x in a:
				if x>=2 or x<=5:
					ct+=1
			s=sum(a)/no 
			if s<4 and ct==no:
				print "No"
			else:
				print "Yes"
                
