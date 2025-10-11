import math

n, m, a = map(int, input().split())
x = max(n, a)
y = max(m, a)

if (n == m and m == a):
	print(1)
else:
	print(math.ceil(n/a)*math.ceil(m/a))