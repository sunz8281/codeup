arr = []
for _ in range(10):
    arr.append(list(map(int, input().split())))

x, y = 1, 1

while arr[y][x]!=2:
    arr[y][x] = 9
    if arr[y][x+1] != 1:
        x += 1
    elif arr[y+1][x] != 1:
        y += 1
    else: break
arr[y][x] = 9

for row in arr:
    print(*row)