h, w = map(int, input().split())
arr = [[0]*w for _ in range(h)]
dList = [[0, 1], [1, 0]]

n = int(input())
for _ in range(n):
    l, d, x, y = map(int, input().split())
    for _ in range(l):
        arr[x-1][y-1] = 1
        x += dList[d][0]
        y += dList[d][1]

for row in arr:
    print(*row)