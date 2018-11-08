# Supersale(10130)
First input the total test case.\
Each test case contain number of item followed by their value and weight.\
Then how many person in the group (each have their max carry weight.\
Output the max value the group can take.

Solution,\
First find the max value that we can hold for certain weight.\
Check each item by double looping from the heaviest to smallest possible carrying weight.\
If weight <= current carry weight && value of current carry weight < value of other item.\ 
Then change the value of it.

```
Example :
	Value  Weight
Item A:  10      20
Item B:  4       5
Item c:  7       15
```

Assume max carry weight 21\
We take Item B and C (2 item) instead of only Item A (1 item)\
Total of Item A value is 10, Total of item B and C is 11.\

Then after the loops we get the max value for each weight that we can carry.\
Add all max value.\
Print the number (of max value)

Worst Case Complexity :  O(n^2)

#Dollars(147)
First input consist of a series of real numbers no greater than ```$300.00``` (seperate line).\
Each amount will be valid if multiple of 5c.\
File terminated by a line containing zero (0.00).\
Output consist of a line each of the amounts in the input.\
Each line consist amount of money and number of ways in which that amount may be made up.

Solution, ntaran dah puyeng.
