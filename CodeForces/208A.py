import re
n=raw_input()
n=n.replace('WUB',' ').lstrip().rstrip()
n=re.sub(' +',' ',n)
print n