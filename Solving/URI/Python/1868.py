def printframe(x, y, n):
	for i in range(n):
		for j in range(n):
			if i == x and y == j:
				print('X', end='')
			else:
				print('O', end='')
		print('')
	print('@')

while 1:
	n = int(input())
	if n == 0 : break
	m = [[0 for i in range(n)] for i in range(n)]
	x = int((n-1)/2)
	y = x
	for t in range(n*n):
		print(m[x][y])
		printframe(x, y, n)
		if x == y:
			y += 1
