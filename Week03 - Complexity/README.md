# Vanya and Lanterns (492B).\
[Submission Link](http://codeforces.com/contest/492/submission/42979782)\
The first line contains two integers n (number of lantern, length of street respectively)\
```n, l = map(int, input().split())```\
Next line contains n integer.\
```a = sorted(map(int, input().split()))```\
(a) list already sorted.\
Next find the highest radius out of the lanterns.\
```d = max(min(a), l - max(a))```\
Then for loop until, the radius light of the whole street achieved (d).\
```
for i in range (n-1):
	d = max(d, (a[i+1] - a[i]) / 2)
```
Finally just print (d).\
```print(d)```

Worst Case : O(n log n)\
Average Case : θ(n log n)\
Best Case : Ω(n)


# Insomnia Cure (148A).
[Submission Link](http://codeforces.com/contest/148/submission/42973154)\
Input data contains integer numbers k, l, m, n and d, each number in a separate line\
```k, l, m, n, d = [int (input()) for i in range(5)]```\
We need to output the number of the damaged dragon.\
First, I declare a variable of the damaged dragon.\
```damaged_dragons = 0```\
Second, I make a loop\
```for i in range (1, d+1):```\
If ```i``` divisible by ```k or l or m or n```\
```if i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0:```\
Increment the damaged dragons\
```damaged_dragons = damaged_dragons + 1```\
Then print the damaged dragons\
```print(damaged_dragons)```

Worst Case : O(n)\
Average Case : θ(n)\
Best Case : Ω(n) 


# I Wanna Be the Guy (469A).
[Submission Link](http://codeforces.com/contest/469/submission/42978382)\
The first line contains a single integer n\
```n = int(input())```\
The second line (total level little x (x) can pass , and which level)\
```x = list(map(int, input().split()))```\
The third line (total level little y (y) can pass , and which level)\
```y = list(map(int, input().split()))```\
Then i make a new list of array excluding the first element of the x and y array.
```
x = x[1:]	
y = y[1:]
```
Example :
```
x = [1,2,3,4]
b = x[1:]
So the output of b = [2,3,4]
```
If they both can finish all the level given\
```if n == len(set(x + y)):```\
Print : ```print("I become the guy.")```
if they cant : ```print("Oh, my keyboard!")```

Worst Case : O(n)\
Average Case : θ(n)\
Best Case : Ω(n)\


