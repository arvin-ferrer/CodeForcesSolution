

t = int(input())
for i in range(t):
    n = input()
    s = input()
    main = []
    count = 0
    for i in range(len(s)):
        sub = []
        for jdx, j in enumerate(s):
            if j == '0' and jdx == i:
                sub.append('1')
            elif j == '1' and jdx == i:
                sub.append('0')
            else:
                sub.append(j)
        main.append(sub)
    for i in main:
        for j in i:
            if j == '1':
                count+=1
    print(count)
