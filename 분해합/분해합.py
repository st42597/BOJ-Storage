import sys
n = int(sys.stdin.readline())
check = True
for i in range(1, n, 1):
    sum = i
    tmp = i
    while tmp:
        sum += tmp % 10
        tmp //= 10
    if sum == n:
        print(i)
        check = False
        break
if check:
    print(0)