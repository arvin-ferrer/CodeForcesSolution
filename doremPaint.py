from math import floor
def func():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        if len(set(arr)) > 2:
            print("NO")
        else:
            hashmap = {}
            for i in arr:
                hashmap[i] = hashmap.get(i, 0)+1
            if len(set(arr)) == 1:
                print("YES")
                # return 0
            else:
                stat = True
                for value in hashmap.values():
                    if value == floor(n/2):
                        print("YES")
                        stat = False
                        break
                    # return 0
                if stat:       
                    print("NO")
func()
