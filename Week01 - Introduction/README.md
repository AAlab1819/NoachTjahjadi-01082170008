# Tricky Alchemy (Problem 912A).
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


#Fraction (Problem 854A).
















