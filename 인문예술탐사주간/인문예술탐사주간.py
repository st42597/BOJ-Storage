import sys
from bisect import bisect
n, q = map(int, sys.stdin.readline().split())
pos = list(map(int, sys.stdin.readline().split()))
pos.append(0)
pos.append(1e7 + 1)
pos.sort()
dp = [0 for _ in range(n + 2)]
for i in range(1, n + 1):
    dp[i] = pos[i] + dp[i - 1]
dp[-1] = dp[-2]
while q:
    x = int(sys.stdin.readline().strip())
    idx = bisect(pos, x) - 1
    print(x * idx - dp[idx] + (dp[-1] - dp[idx]) - (n - idx) * x)
    q -= 1