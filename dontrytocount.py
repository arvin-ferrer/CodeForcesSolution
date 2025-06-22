

n = int(input())
for _ in range(n):
    n, m = map(int, input().split())
    x = input()
    s = input()
    stat = False
    for i in range(0, 10):
        if s in x:
            print(i)
            stat = True
            break
        temp = ""
        temp += x
        x += temp
    if not stat:
        print(-1)

