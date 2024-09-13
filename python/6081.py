n = int(input(), 16)
for i in range(1, 16):
    print('{:X}*{:X}={:X}'.format(n, i, n*i))