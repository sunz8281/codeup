arr = []
for _ in range(19):
    arr.append(list(map(int, input().split())))

n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    for i in range(19):
        if arr[x-1][i]==1:
            arr[x-1][i] = 0
        else:
            arr[x-1][i] = 1
    for i in range(19):
        if arr[i][y-1]==1:
            arr[i][y-1] = 0
        else:
            arr[i][y-1] = 1

for row in arr:
    print(*row)