import re
n=raw_input()
n=re.sub('[{}.,]','',n)
a=[]
a=set(n.split())
print len(a) 