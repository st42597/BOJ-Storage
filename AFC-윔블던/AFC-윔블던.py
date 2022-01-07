import sys
a, b = map(int, sys.stdin.readline().split())
if (a + b) % 2:
    print(-1)
    sys.exit()
s1 = (a + b) // 2
s2 = a - s1
if s2 < 0:
    print(-1)
    sys.exit()
print(max(s1, s2), min(s1, s2))