def cocktail_sort(a):
    n = len(a)
    swapped = True
    start = 0
    end = n-1
    while (swapped == True):
        swapped = False
        for i in range (start, end):
            if (a[i] > a[i + 1]) :
                a[i], a[i + 1]= a[i + 1], a[i]
                swapped = True
        if (swapped == False):
            break
        swapped = False
        end = end-1
        for i in range(end-1, start-1, -1):
            if (a[i] > a[i + 1]):
                a[i], a[i + 1] = a[i + 1], a[i]
                swapped = True
        start = start + 1

n = int(input())
x = list(map(int, input().split()))

answer = 0

cocktail_sort(x)

for i in range(len(x)-1):
	if (i+2)>= n:
		if (x[i] == x[i+1]) and (x[i] != 0):
			answer = answer + 1
			i = i+1
	else:
	
		if x[i] == x[i+1] and x[i] != 0  and x[i] !=x[i+2]:
			answer = answer + 1
			i = i + 1
			
		elif x[i] == x[i+1] and  x[i] == x[i+2] and x[i]!= 0:
			answer = -1
			break
	
print(answer)

