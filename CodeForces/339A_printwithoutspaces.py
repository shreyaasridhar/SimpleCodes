import sys
x = map(int, raw_input().split('+'))
x.sort()
for i in range(len(x)-1):
    print x[i],
    sys.stdout.write('+')
print x[len(x)-1]