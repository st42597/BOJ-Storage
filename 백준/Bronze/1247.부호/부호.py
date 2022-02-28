import sys
T = 3
while T:
    N = int(sys.stdin.readline())
    sum = 0
    for i in range(N):
        sum += int(sys.stdin.readline())
    if sum == 0: print(0)
    elif sum < 0: print("-")
    else: print("+")
    T -= 1