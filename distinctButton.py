def solve():
    n = int(input())
    has_left = has_right = has_up = has_down = False

    for _ in range(n):
        x, y = map(int, input().split())
        if x < 0:
            has_left = True
        elif x > 0:
            has_right = True
        if y < 0:
            has_down = True
        elif y > 0:
            has_up = True

    if has_left and has_right and has_up and has_down:
        print("NO")
    else:
        print("YES")

t = int(input())
for _ in range(t):
    solve()

