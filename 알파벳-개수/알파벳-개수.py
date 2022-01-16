import sys
vocab = sys.stdin.readline().strip()
cnt = [0 for _ in range(26)]
for c in vocab:
    cnt[ord(c) - ord('a')] += 1
print(' '.join(map(str, cnt)))