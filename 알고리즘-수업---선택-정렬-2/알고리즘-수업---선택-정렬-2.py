import sys
n, k = map(int, sys.stdin.readline().split())
numbers = list(map(int, sys.stdin.readline().split()))
for i in range(n - 1, 0, -1):
    max_val = 0
    idx = 0
    for j in range(i + 1):
        if max_val < numbers[j]:
            max_val = numbers[j]
            idx = j
    if i != idx:
        numbers[i], numbers[idx] =  numbers[idx], numbers[i]
        k -= 1
        if k == 0: break
if k == 0:
    print(*numbers)
else:
    print(-1)