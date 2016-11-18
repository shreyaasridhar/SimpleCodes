t=input()
for i in range(t):
    x=raw_input()
    if len(x)>10:
        print x[0]+str(len(x)-2)+x[len(x)-1]
    else:
    	print x
