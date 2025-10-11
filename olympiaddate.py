t = int(input())
for i in range(t):
    n = int(input())
    nums = list(map(int, input().split()))
    count = [0, 0, 0, 0, 0]
    found = False;
  
    for idx, j in enumerate(nums):

        if j == 0:
            count[0]+=1
        elif j == 1:
            count[1] +=1
        elif j == 3:
            count[2] +=1
        elif j == 2:
            count[3] += 1
        elif j == 5:
            count[4]+=1
        if count[0] >= 3 and count[1] >= 1 and count[2] >= 1 and count[3] >= 2 and count[4] >=1:
            print(idx+1)
            found = True
            break
    if not found:
        print(0)
