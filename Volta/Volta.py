import sys
a, b = map(int, sys.stdin.readline().split())
cnt = 1
while True:
    if(abs(cnt / a - cnt / b) >= 1): break
    cnt += 1
print(cnt // a + (1 if cnt % a != 0 else 0))