import sys
str = sys.stdin.readline()
i = 0
while i < len(str):
    print(str[i : i + 10])
    i += 10