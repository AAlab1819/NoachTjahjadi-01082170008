n = int(input())
times = n
for i in range(1,n): #for loop from 1 to n
    times = times + (n-i)*i #the formula

print(times)
