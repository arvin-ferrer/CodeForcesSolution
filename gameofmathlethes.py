tt = int(input())
for x in range(tt):
    n,total = map(int,input().split())
    nums = list(map(int,input().split()))
    ctr = 0
    # for i in range(n):
    #     setnum = set(nums)
    #     for j in setnum:
    #         for k in nums:
    #             if j == k:
    #                 continue
    #             if j + k ==total:
    #                 ctr += 1
    # x = 0
    # while x < len(nums):
    #     y = x+1
    #     # for j in range(+1, n):
    #     while y < len(nums):
    #         if nums[x] + nums[y] == total:
    #             ctr += 1
    #             nums.pop(x)
    #             nums.pop(y-1)
    #             x-=1
    #             break
    #         y += 1
    #     x += 1
    # print(ctr)
    left = 0
    right = n-1
    nums.sort()
    while left < right:
        k = nums[left]+nums[right] 
        if k == total:
            left+=1
            right-=1
            ctr+=1
        elif k < total:
            left +=1
        else:
            right -=1

    print(ctr)
