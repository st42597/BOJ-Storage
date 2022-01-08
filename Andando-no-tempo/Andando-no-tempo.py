import sys
credits = list(map(int, sys.stdin.readline().split()))
credits.sort()
if (credits[0] == credits[1]) or (credits[1] == credits[2]) or (credits[0] + credits[1] == credits[2]):
    print("S")
else:
    print("N")