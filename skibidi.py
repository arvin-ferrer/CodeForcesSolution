t = int(input(""))
for i in range(t):
    s = input("")
    count = 0
    same = False
    for j in range(len(s)-1):
        if s[j] == s[j+1]:
            same = True
    if same:
        print(1)
    else:
        print(len(s))