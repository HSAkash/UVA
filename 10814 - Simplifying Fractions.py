import math
n = int(input())
for _ in range(n):
	p, q = input().split('/')
	p = int(p)
	q = int(q)
	GCD = math.gcd(p,q)
	print(p//GCD,'/',q//GCD)
