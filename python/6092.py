n = int(input())
counter = [0]*24
arr = list(map(int, input().split()))
for num in arr:
    counter[num] += 1
counter.pop(0)
print(*counter)