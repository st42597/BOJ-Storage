import sys
A = list(map(int, sys.stdin.readlines()))
ans = float('inf')
for i in range(3):
    calc = 0
    for j in range(3):
        calc += abs((i - j) * A[j]) * 2
    ans = min(ans, calc)
print(ans)