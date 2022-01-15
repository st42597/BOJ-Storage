import sys
for t in range(int(sys.stdin.readline())):
    a, b = sys.stdin.readline().split()
    a = int(a)
    print(''.join(c * a for c in b))