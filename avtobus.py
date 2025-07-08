t = int(input())
for _ in range(t):
    n = int(input())
    if n % 2 != 0 or n < 4:
        print(-1)
    else:
        N = n // 2
        min_buses = (N + 2) // 3   # avoids float precision issues //this is ceil
        max_buses = N // 2 #this is floor
        print(min_buses, max_buses)
