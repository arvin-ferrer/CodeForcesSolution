from math import ceil
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    summ = 0;
    maxx = 0;
    for i in arr:
        summ += i
        maxx+=ceil(i/k)
    print(ceil(summ/k), maxx)
