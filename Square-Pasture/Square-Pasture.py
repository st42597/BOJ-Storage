import sys
x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
x3, y3, x4, y4 = map(int, sys.stdin.readline().split())
print(max((max(x1, x2, x3, x4) - min(x1, x2, x3, x4)), (max(y1, y2, y3, y4) - min(y1, y2, y3, y4))) ** 2)