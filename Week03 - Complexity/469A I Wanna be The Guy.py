n = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))

x = x[1:]	
y = y[1:]

if n == len(set(x + y)):
	print("I become the guy.")
else:
	print("Oh, my keyboard!")
