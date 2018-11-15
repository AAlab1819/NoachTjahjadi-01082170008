# Dijkstra?(20C)
[Submission Link](http://codeforces.com/contest/20/submission/45752088)\
First line contain 2 integes n and m\
n = number of vertices\
m = number of edges\
Following m lines (one edge each)
Find the smallest weight to go from vertices(n) 1 to N.\

The solution.
Find which path is the bestway to go to N.\
Use Dijkstra Alogrithm to solve this problem.\
Here we want to find the cheapest 'PRICE' to destination from source.
```
Example: 
7 7
1 2 3
2 4 5
3 4 4
4 6 4
6 7 6
4 5 5
3 7 1

S  D  P
1  2  3
2  3  5
3  4  4
4  3  4
6  7  6
4  5  5
3  7  1

S = Source
D = Destination
P = Price

Output : 1 2  3 7
```
The output: 1 2 3 7 because its the cheapest way to reach destination from source.

Worst Case Complexity: O(nlogn)

# The Two Routes(601A)
[Submission Link](http://codeforces.com/contest/601/submission/45752362)\
First line contains 2 integers n and m.\
n = number of towns.\
m = number of railways.\
Each m lines contains 2 integers u and v, denoting railway between towns u and v.\
We need to find the shortest way to reach the last town from first town.

The solution.\
Use adjacency matrix.\
We dont want to know the cost but how many transits to reach last town.
First check if there is a railway from 1 to N(town).\
If there is railway we can travel using train.\
No railways it means we use bus.\
Use BFS to find shortest path

Worst Case Complexity: O(n^2)
