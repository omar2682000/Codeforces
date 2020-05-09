from math import sqrt
T = int(input())
for case in range(T):
	n = int(input())
	ans = False
	move = True
	for i in range(2,int(sqrt(n)) + 1):
		if move is False:break
		if n%i == 0:
			a = i
			b = int(n/a)
			for j in range(a + 1 , int(sqrt(n)) + 1):
				if (b%j == 0):
					b = b//j
					c = j
					if (c==b or c==a or a==b):ans = False
					else:
						move = False
						ans = True
						break
	if ans is True:
		print("YES")
		print(a,b,c)
	else:print("NO")
