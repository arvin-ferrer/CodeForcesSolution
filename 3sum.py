

def solve():
	n = input()
	arr = [int(x[-1]) for x in input().split()]
	temp = []

	for i in arr:
		if temp.count(i) < 3:
			temp.append(i)
	for i in range(len(temp)):
		for j in range(len(temp)):
			for k in range(len(temp)):
				if i != j != k:
					sum = temp[i]+temp[j]+temp[k]
					ssum = str(sum)
					if ssum[-1] == '3':
						print("YES")
						return
	print("NO")

t = int(input())

for _ in range(t):
	solve()		