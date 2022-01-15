import sys
y = int(sys.stdin.readline())
name = ["ITMO", "SPbSU", "PetrSU, ITMO"]
if y == 2006:
    print(name[2])
elif y == 1996 or y == 1997 or y == 2000 or y == 2007 or y == 2008 or y == 2013 or y == 2018:
    print(name[1])
else:
    print(name[0])