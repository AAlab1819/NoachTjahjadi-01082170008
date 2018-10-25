# Partition(964A)
[Submission Link](http://codeforces.com/contest/946/submission/44820655)\
First line contains one n integer (number of elements)\
Second line contains n integer (the elements of sequence)\
Output the maximum possible value of B-C

First just loop for the number of elements.\
If the elements is negative put it to c, but if its positive put it to b.\
Then just output b-c.


Complexity Worst Case: O(n)

# File Name(978B)
[Submission Link](http://codeforces.com/contest/978/submission/44821061)\
First line contains integer n (length of the file name)\
Second line contains a string of length n (file name)\
Output the minimun number of character to remove from the file.
The file name cant contain "xxx" (forbidden)\
If the file does not contain "xxx" just print 0

Loop all the character and if we found "x" character three in a row like "xxx" in the file name.\
Add the number of removed forbidden characters.

```
Example:
Input : 5
	xxxxx

Output : 3
```

Need to remove 3 x to make it just "xx"(not forbidden)


Complexity Worst Case: O(n)

# Coupons and Discounts(731B)\
[Submission Link](http://codeforces.com/contest/731/submission/44821450)\
First line contains a single integer n (number of training sessions)\
Second line contains n integers (number of teams presenet on each days)\
Output ```YES``` if its possible to use discount and coupon, else print ```NO```\

First input all the pizza needed to be ordered on that day.\
If the input is an odd and > 2 then use the discount and a coupon.\
If there is leftover pizza cant use discount and coupons.\
Then check last day (even/odd)\
If its odd theres a leftover coupon. (not possible)

Complexity Worst Case: O(n)


