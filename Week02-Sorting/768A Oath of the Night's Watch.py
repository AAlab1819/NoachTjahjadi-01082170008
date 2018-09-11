def next_gap(gap):
    gap = (gap * 10)//13
    if gap < 1:
        return 1
    return gap
def comb_sort(arr):
    n = len(arr)
    gap = n 
    swapped = True
    while gap !=1 or swapped:
        gap = next_gap(gap)
        swapped = False
        for i in range(0, n-gap):
            if arr[i] > arr[i + gap]:
                arr[i], arr[i + gap]=arr[i + gap], arr[i]
                swapped = True
				
n = int(input())
x = list(map(int, input().split()))

comb_sort(x)
cant_support = 0 #how many steward that jon cant support

for i in x:
	if i == x[0]:
		cant_support = cant_support + 1
	else:
		break
		
for i in reversed(x):
	if i == x[len(x)-1]:
		cant_support = cant_support + 1
	else:
		break

if n - cant_support >= 0:
	print(n - cant_support)
else:
	print(0)
