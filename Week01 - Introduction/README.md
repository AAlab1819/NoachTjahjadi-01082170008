# Tricky Alchemy (Problem 912A).
[Submission Link](https://codeforces.com/contest/912/submission/42308697)\
Grisha needs to obtain some yellow, green and blue balls.\
Yellow Ball : 2 Yellow Crystal. (2y)\
Green Ball  : 1 Yellow + 1 Blue. (y+b)\
Blue Ball   : 3 Blue Crystal. (3b)\
We need to print how many crystal does Grisha need.

Yellow crystal required : \
```yellow = 2 * x + y```\
x = yellow ball needed.\
y = green ball needed.

Blue Crystal required  :\
```blue = y + 3 * z```\
y = green ball needed.\
z = blue ball needed.

After that just print the needed crystal (ans).\
```ans = max(0, yellow - a) + max(0, blue - b)```\
a = yellow crystal owned.\
b = blue crystal owned.\
code above is to calculate crystal needed.

```max(0, yellow - a)```\
the code above makes the program to choose the biggest number in the brackets. (cant be <0)



# Fraction (Problem 854A).
[Submission Link](http://codeforces.com/contest/854/submission/42455021)\
In this problem we have to print the highest possible positive integer that cannot be simplified anymore.\
```num = n // 2```\
```den = n - num```\
First we need to decide the numerator and the denominator.\
Divide the numerator by 2 and the denominator is the rest.\

```while math.gcd(num, den) != 1:```\
While the Greatest Common Divisor (gcd) != 1\
Subtract the numerator by 1\
Add the deniminator by 1\

Then print the answer.

# Diverse Team (Problem 988A).
[Submission Link](http://codeforces.com/contest/988/submission/42458158)
The first line of input contains : the number of students, the size of team to be you have to form.\
```n, k = map(int, input().split())```\

The second line of input contains : the rating of the students.\
```x = list(map(int, input().split()))```\

Use this ```dict = {}```  to detect unique numbers.
Example : 11 12 13 13 15 -> the unique numbers : 11 12 13 15

```for i in x:```\
  ```if i not in dict and len(dict)<k:```\
		   ```dict[i] = x.index(i)+1```\

This code above is to make sure that the index !> k\
Example : \
```
Input : 15 5
        11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

Output : 1 2 3 4 5
```

After that just make the condition\
If you can make the team print yes and print the index.
If you cant print the team just simply print no.

For printing the index :
```for i in dict:```\
		```print(dict[i], end=" ")```
		






          
 































