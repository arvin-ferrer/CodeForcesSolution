

t = int(input())	
for _ in range(t):
	n = input()
	arr = list(map(str, input().split()))
	stat = True
	alreadyGood = True
	# temp = []


	for i in range(1, len(arr)):
		if int(arr[i]) < int(arr[i-1]):
			if (len(arr[i-1]) > 1):
				#6 8 59 86 37 77 72
				#12 28 5
				# print(arr[i-1][1], arr[i])
				if int(arr[i][0]) < int(arr[i-1]):
					if int(arr[i-1][1]) > int(arr[i][0]):
						if int(arr[i-1][1]) < int(arr[i]):	
							stat = False

	if (stat):
		print("YES")
	else:
		print("NO")

