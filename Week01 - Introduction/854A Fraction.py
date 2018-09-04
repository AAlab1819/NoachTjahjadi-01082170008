import math

n = int(input())

num = n // 2 #numerator
den = n - num #denominator

while math.gcd(num, den) != 1: 
			num = num - 1 #numerator + 1
			den = den + 1 #denominator -1
			
print(num, den)
