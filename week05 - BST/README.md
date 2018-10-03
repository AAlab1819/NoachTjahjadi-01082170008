# Party (115A).\
[Submission Link](http://codeforces.com/contest/115/submission/43687567).\
The first line contains integer n (number of employee).\
Second line contains n line contain integer.\
-1 (employee with no superior).\
In this problem just output the maximum depth of the tree.

```
Example 1:
Input : 6 -> -1, 1, 2, 2, 3, 3

	1(-1)	---> Depth : 1
	/
       2(1)     ---> Depth : 2
      /   \  
     3(2)  4(2) ---> Depth : 3
     /      \
    5(3)     6(3) ---> Depth : 4

Output : 4 

Example 2:
Input : 4 -> -1, -1, 1, 1

      1(-1)        3(-1) ---> Depth : 1
       /            /
      2(1)         4(1)  ---> Depth : 2

Output : 2

```
Just find the maximum between the ```current_depth``` and ```groups_in_party```\
```groups_in_party = max(current_depth, groups_in_party);```\
Then just output ```groups_in_party``` //max depth

Complexity : Worst Case -> O(n log n)

# Registration System (4C).\
[Submission Link](http://codeforces.com/contest/4/submission/43720406)\
The first line contains number n (n lines contain the requests to the system).\
Second input is a non empty line, consist (not more than 32 character), all lowercase letter.\
Just output ```"OK"``` if the name have no duplicate in the input.\
Then output the duplicate one like this:
```
Input : 4

	 udin
	 udin
	 udin
	 udin

Output : OK
	 udin1
	 udin2
	 udin3
```
```
Example :

Input : 5
	joko
	udin
	joko
	joko
	eko

Output : OK
	 OK
	 joko1
	 joko2
	 OK
```
Output the name and how many times that name has been registered to the system.\

Complexity : Worst Case -> O(n log n)

# Christmas Spruce (913B)\
[Submission Link](http://codeforces.com/contest/913/submission/43721119)\
The first line contains one integer n (the number of vertices in the tree)\
Second input is n-1 (index of the parent i-th vertex)\
Vertex 1 is the root.\
Root at least have 2 children.\
```
Example 1:

         1
       / | \ \
      2  3 4  5
     /|\   
    6 7 8

Output : YES 
```
Output is ```"YES"``` (its spruce) 1 have 3 leaf children and 2 have 3 leaf children\
```
Example 2:

           1
	 / | \
        2  3  4
       /|\
      5 6 7 

Output : NO
```
Output is ```"NO"``` (not spruce) 1 have 2 leaf children (2 is not leaf children)\

Use map to make a tree\
```map <int, vector <int> > tree;```\
Check if the index have children or not.\
If have children count for each child.\
If leaves (```number_of_leaf```) < 3 --> the tree is not a spruce 

Complexity : Worst Case -> O(n log n)



