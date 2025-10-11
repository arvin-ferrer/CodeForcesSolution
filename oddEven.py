from collections import Counter

s = input("")
hashmap = Counter(s)
even = True
odd = True

for key, value in hashmap.items():
    if value % 2 != 0:
        even = False
    else:
        odd = False

if even == False and odd == False:
    print("0/1")
elif even:
    print("0")
else:
    print("1")
