# Kuriyama Mirai's Stones(433B)\
[Submission Link](http://codeforces.com/contest/433/submission/45155879)\
First line contains an integer (cost of the stones)\
Second line contains n integer\
Third line contains an integer m (the number of Kuriyama Mirai's questions)\
Then m lines (each line contains 3 integers) -> type, l, r\
type, l and r describing a question\
If type = 1 (output the answer for first question\
else output the answer for the second one\
Output the sum of numbers from l to r according to the type.

First type = total of stones cost from l to r\
Second type = total of stones cost from l to r in an non decreasing order.

Count the cumulative array to avoid TLE.\
Store the cost in 2 cumulative array (normal and sorted array)\

Complexity Worst Case : O(nlogn)


# Party Lemonade(913C)\
[Submission Link](http://codeforces.com/contest/913/submission/45156044)\
First line contains two integer n and L (how many type of bottles and required lemonade)\
Second line contains n integers (cost of bottles of diffrent types)\
Output the smalles number of roubles you have to pay in order to buy at least L liters of lemonade


Find the cheapest cost to fulfill the lemonade liters that needed.\
Each bottle have diffrent volume and cost. (volume of the i-th bottle = 2^i-1 liters)\
We can buy many bottles with the same volume, and have more lemonades in liters than required.

First store the cost for each type of bottle.\
Check if we can buy 2 bottles (smaller type) with a cheaper price rather than 1 bottle with higher price.\
If bigger bottle cost higher, store the type of bottle with prive of 2 smaller bottle.\
Loop all the bottles from highest to smallest (liters).\
Then see if its cheaper to buy 2 big bottle.

Complexity Worst Case : O(n)
