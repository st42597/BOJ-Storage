import sys
l1 = list(map(int, sys.stdin.readline().split()))
l2 = list(map(int, sys.stdin.readline().split()))
ans = 0
for i in range(3):
    ans += l2[i] - l1[i] if l2[i] - l1[i] > 0 else 0
print(ans)