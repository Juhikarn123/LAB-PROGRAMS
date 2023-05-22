def maximizeSum(a, n):
	maximum = max(a)
	ans = dict.fromkeys(range(0, n + 1), 0)
	for i in range(n):
		ans[a[i]] += 1
	result = 0
	i = maximum
	while i > 0:
		if ans[i] > 0:
			result += i
			ans[i-1] -= 1
			ans[i] -= 1
		else:
			i -= 1
	return result
if _name_ == "_main_":
    n=int(input())
    a = list(map(int, input().strip().split()))[:n]
    print(maximizeSum(a, n))
