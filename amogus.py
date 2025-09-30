n = int(input())

for x in range(n):
    s = input()
    if len(s)<2:
        if s =="i":
            print("us")
    else:
        if s[-1] == "i":
            print(s[:len(s)-1]+"us")
        elif s == "us":
            print("i")
        elif s[-1] == "s" and s[-2]:
            print(s[:len(s)-2]+"i")
        else:
            print(s)
            