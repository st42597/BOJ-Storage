import sys
a = list(sys.stdin.readline().split())
if int(a[0]) + int(a[2]) == int(a[4]):
    print("YES")
else:
    print("NO")