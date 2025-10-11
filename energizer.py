def solve():
    n = int(input())
    s = list(input())
    counts = {'L': 0, 'I': 0, 'T': 0}
    for char in s:
        counts[char] += 1

    operations = []
    total_insert = 0

    while True:
        counts = {'L': 0, 'I': 0, 'T': 0}
        for char in s:
            counts[char] += 1

        total_length = len(s)
        if total_length > 300:
            print("-1")
            return

        if total_length % 3 != 0:
            print("-1")
            return

        target = total_length // 3

        if counts['L'] == target and counts['I'] == target and counts['T'] == target:
            break

        inserted = False
        for i in range(len(s) - 1):
            if s[i] == s[i+1]:
                continue

            if counts['L'] < target and s[i] != 'L' and s[i+1] != 'L':
                s.insert(i+1, 'L')
                operations.append(i + 1 + total_insert)
                total_insert += 1
                inserted = True
                break
            elif counts['I'] < target and s[i] != 'I' and s[i+1] != 'I':
                s.insert(i+1, 'I')
                operations.append(i + 1 + total_insert)
                total_insert += 1
                inserted = True
                break
            elif counts['T'] < target and s[i] != 'T' and s[i+1] != 'T':
                s.insert(i+1, 'T')
                operations.append(i + 1 + total_insert)
                total_insert += 1
                inserted = True
                break

        if not inserted:
            print("-1")
            return

        if len(operations) > 2 * n:
            print("-1")
            return

    print(len(operations))
    for op in operations:
        print(op)


t = int(input())
for _ in range(t):
    solve()

