import sys
vocab = '0' + sys.stdin.readline().strip()
check = [0 for _ in range(len(vocab))]
pos = [-1 for _ in range(400001)]
cnt = ans = 0
pos[200000] = 0

for i in range(1, len(vocab)):
    if vocab[i] == 'S':
        cnt += 2
        check[i] = 1
    elif vocab[i] == 'K':
        cnt += -1
        check[i] = 1
    check[i] += check[i - 1]
    if pos[cnt + 200000] == -1:
        pos[cnt + 200000] = i
    if pos[cnt + 200000] != -1 and check[i] - check[pos[cnt + 200000]] > 0:
        ans = max(ans, i - pos[cnt + 200000])
print((ans if ans > 0 else -1))