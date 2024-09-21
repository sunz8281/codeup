arr = [[0]*20 for _ in range(20)]

n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    arr[x][y] = 1

for i in range(1, 20):
    print(*arr[i][1:])