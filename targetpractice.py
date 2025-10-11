

t = int(input())

for _ in range(t):
    x = []
    for i in range(10):
        temp = input()
        x.append(temp)
    score = 0
    for row in range(10):
        for col in range(10):
            if x[row][col] == 'X':
                if row == 0 or row == 9 or col == 9 or col == 0 or (col in range(1,9) and (row == 0 or row == 9)):
                    score+=1
                elif row == 1 or row == 8 or col == 8 or col == 1:
                    score += 2
                elif row == 2 or row == 7 or col == 7 or col == 2:
                    score += 3
                elif row == 3 or row == 6 or col == 6 or col == 3:
                    score += 4
                else:
                    score += 5

    print(score)
