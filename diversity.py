

s = input()
k = int(input())
hashmap = {}
for c in s:
	hashmap[c] = hashmap.get(c, 0)+1

if len(s) < k:
	print("impossible")
else:
	unique = 0
	duplicates = 0

	for key, value in hashmap.items():
		unique+=1
		if value > 1:
			duplicates+= value-1

	if unique >= k:
		print(0)
	elif unique < k:
		change = k-unique
		if duplicates >= change:
			print(change)
		else:
			print("impossible")