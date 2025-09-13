

T = int(input())
for _ in range(T):
    hashmap = {}
    n, k = map(int, input().split())
    s = input()
    odd = 0
    if len(s) == 1:
        print("YES")
    else:
        for i in s:
            hashmap[i] = hashmap.get(i, 0)+1
        for key, value in hashmap.items():
            if value % 2 != 0:
                odd+=1
        if odd<=k+1:
            print("YES")
        else:
            print("NO")
