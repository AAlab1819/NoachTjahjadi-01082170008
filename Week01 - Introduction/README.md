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
In this problem we have to output the highest possible positive integer that cannot be simplified anymore.\
```num = n // 2```\
```den = n - num```\
First we need to decide the numerator and the denominator.\
Divide the numerator by 2 and the denominator is the rest.\

```while math.gcd(num, den) != 1:```\
While the Greatest Common Divisor (gcd) != 1\
Subtract the numerator by 1\
Add the deniminator by 1\

Then print the answer.

























