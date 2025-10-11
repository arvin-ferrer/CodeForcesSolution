
t = int(input())

for _ in range(t):
    s = input()
    output = ""
    # print(s)
    for i in range(len(s)):
        if i == 0:
            output += s[i]
        elif s[i] == " ":
            output += s[i+1]
    print(output)
