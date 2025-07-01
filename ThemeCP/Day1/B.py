from math import ceil

t = int(input())

for _ in range(t):
    n, a, b = map(int, input().split())
    if a > b:
        print(1)
    else:
        print(ceil(n/a))
