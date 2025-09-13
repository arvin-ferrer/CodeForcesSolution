def solve():
    n = input()
    allArr = []
    for x in range(int(n)):
        j = input()
        arr1 = list(map(int, input().split()))
        allArr.append(arr1)
    if len(allArr) == 1:
        print(min(allArr[0]))
        return
    minimums = []
    for i in range(len(allArr)):
        allArr[i] = sorted(allArr[i])
        minimums.append(allArr[i][1])
    M = float('inf')
    K = 0
    for i in allArr:
        M = min(M, min(i))
        K += i[1]
    print(M+K-min(minimums))
t = int(input())
for _ in range(t):
    solve()
