

t = int(input())
for _ in range(t):
    n = input()
    arr = list(map(int, input().split()))
    if len(arr) == 1:
        print(0)
    else:
        print(max(arr)-min(arr))
