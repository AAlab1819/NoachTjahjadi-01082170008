# Buttons (268B)
[Submission Link](http://codeforces.com/contest/268/submission/43367032)\
A single line contains integer n (the number of buttons the lock has)\
```n = int(input())```\
I assign times = n(input).\
```times = n```\
Then for loop 1 to n.\
```for i in range(1,n):```\
Inside the for loop, there is formula for the problem.\
```times = times + (n-i)*i```\
After the for loop is done, print the answer (times)\
```print(times)```

Complexity: O(n)

# Igor In the Museum (598D)
[Submission Link](https://codeforces.com/contest/598/submission/43414412)\
Igor is in the museum and he wants to see as many pictures as possible.\
Museum can be represented as a rectangular field of n × m cells. (n = row), (m = column).\
Empty Cells are marked with ```'.'``` and Impassable Cells are marked with ```'*'```\
Calculate the maximum number of pictures that Igor can see.\ 
Igor can move to an empty spaces and only see picture in 4 direction ( ^, v, <, >)\
Example : 
```
Input :  4 6 2 
        ******
        *...**
        ******
        ***..*
        2 2
        4 4

Output : 8
         4
```
So the first input is n, m, k respectively\
Then make the wall ```'*'``` and the empty space ```'.'``` based on the array n x m (n = row, m = column)\
Then input the test case (k)\
The output is how many picture that can Igor see. (based on 4 direction and emptyspace)\

Using flood fill algorithm.\
Flood fill each room in the array then assign the room location in ```ArrayIndexMap``` to a number.\
Then output the answer for test case (x, y)\
```cout << Array[ArrayIndexMap[--y][--x]] << endl;```

Complexity: O(nm)
        
         






