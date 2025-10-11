def solve():
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	hashmap = {}
	arr.sort()  
	nodups = set()
	if k == 0:
		for i in arr:
			nodups.add(i)
		print(len(nodups))
		return

	for i in arr:
		hashmap[i] = hashmap.get(i, 0) + 1
	# print(arr, hashmap)
	hashmap = sorted(hashmap.items(), key=lambda x:x[1])
	print(hashmap)
	# for key, value in hashmap.items():
	# 	if k > 0 and key != :
	# 		value -= k
	# 		k -= value
	# count = 0
	# for key, value in hashmap.items():
	# 	if value > 0:
	# 		count+=1
	# print(count)
	# mx = 0
	# tochange = -1
	# for key, value in hashmap.items():
	# 	if value > mx:
	# 		mx = value
	# 		tochange = key
	# # print(tochange)
	# # print(arr)
	# for i in range(n):
	# 	if arr[i] != tochange and k > 0:
	# 		arr[i] = tochange
	# 		k -= 1
	# # print(arr)
	# for i in arr:
	# 	nodups.add(i)
	# print(len(nodups))
t = int(input())
for _ in range(t):
	solve()
