# Heaps: Find the Running Median
This problem want us to find the median in the list we inputed.
Example: The input ```1 2 3 4 5``` (3 is the median)
       : The input ```10 9 8 7```  ((9 + 8)/2 = 8.5 is the median)


The first line contains a single integer (input how many number)\
The next input just input as much as the first input.\
Then output the median.
```
Example:
Input : 6
	7
	18
	4
	12
	19
	22

Output : 7    (first number)
	 12.5 (median of 7, 18)
	 7    (median of 4, 7, 18)
	 9.5  (median of 4, 7, 12, 18)
	 12   (median of 4, 7, 12, 18, 19)
	 15   (median of 4, 7, 12, 18, 19, 22)

```
Use Heap Sort to sort the array.\
After we sort the array, just find the median.

# Roy and Trending Topics
This problem want us to find 5 Trending Topics (highest z-score).\
Each topics have their own ID.\
Each of them have a starting z-score.\
Now z-score change everyday according to the following rules:

1. Topic mention Post (z-score +50)\
2. Like (z-score +5)\
3. Comment (z-score +10)\
4. Share (z-score +20)

First line contains integer N
N lines follow
Each contain 6 space seperated numbers
These numbers represent:
Topic (ID)\
Current z-score (Z)
Post (P)\
Likes (L)\
Comments (C)\
Shares (S)

The output, print top 5 Topics each in a new line.\
Each line should contain two space seperated integers (ID and New z-score).

Sort based on changes (New z-score - Old z_score), if z-score is the same, the bigger Topic ID wins.\
Just list all the possibilities and find max and continues 5 times.

