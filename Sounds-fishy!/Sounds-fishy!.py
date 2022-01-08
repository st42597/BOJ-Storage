import sys
depths = list(map(int, sys.stdin.readlines()))
if depths[0] < depths[1] and depths[1] < depths[2] and depths[2] < depths[3]:
    print("Fish Rising")
elif depths[0] > depths[1] and depths[1] > depths[2] and depths[2] > depths[3]:
    print("Fish Diving")
elif depths[0] == depths[1] and depths[1] == depths[2] and depths[2] == depths[3]:
    print("Fish At Constant Depth")
else:
    print("No Fish")
