import sys
a = list(map(int, sys.stdin.readline().split()))
sum = 0
for num in a:
    sum += num
print(sum * 5)