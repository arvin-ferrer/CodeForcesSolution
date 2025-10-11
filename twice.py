t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    counter = 0
    x = []
    for i in range(n):
        for j in range(n):
            if i not in x and j not in x and i != j:
                if a[i] == a[j]:
                    counter +=1
                    x.append(i)
                    x.append(j)
    print(counter)
