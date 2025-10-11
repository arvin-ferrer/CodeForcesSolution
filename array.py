

t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    count0 = 0
    count1 = 0
    for j in arr:
        if j == 0:
            count0+=1
        else:
            count1+=1
    if count0 == count1:
        print("NO")
    else:
        print("YES")
