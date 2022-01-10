import sys
n = int(sys.stdin.readline())
a, b = map(int, sys.stdin.readline().split())
c = int(sys.stdin.readline())
cals = [int(sys.stdin.readline()) for _ in range(n)]

cals.sort(reverse=True)
for cal in cals:
    if (c + cal) / (a + b) > c / a:
        c += cal
        a += b
    else:
        break
print( c // a)