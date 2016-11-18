import sys
S=raw_input()
S=S.lower()
for i in S:
    if i not in "aeiouy":
        sys.stdout.write('.')
        sys.stdout.write(i)
    