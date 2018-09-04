import math

n = int(input())

num = n // 2
den = n - num

while math.gcd(num, den) != 1:
			num = num - 1
			den = den + 1
			
print(num, den)
