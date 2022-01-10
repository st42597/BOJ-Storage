import sys
l, r = map(int, sys.stdin.readline().split())
if l == 0 and r == 0:
    print("Not a moose")
elif l == r:
    print("Even", l * 2)
else:
    print("Odd", max(l, r) * 2)