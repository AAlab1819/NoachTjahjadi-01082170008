# Spyke Talks (291A).
[Submission Link](http://codeforces.com/contest/291/submission/42729991)\
Sorting Method : Cocktail Sort.\
First line contain n integer (number of secretaries in Polycarpus's corporation)\
```n = int(input())```\
Second line contain n space seperated integers\
```x = list(map(int, input().split()))```\
We want to print a single integer — the number of pairs of chatting secretaries, or -1 if Polycarpus's got a mistake in his records and the described situation could not have taken place.\
Example :
```
Input : 6(n)
        0 1 7 1 7 10(x)
Sort (x) using Cocktail Sort
      : 0 1 1 7 7 10
(the number of duplicate number above: 1 and 7)
(so there are 2 duplicate number) (pairs of chatting secretary)

Output : 2
```
Output is -1 if there any secretary using more than 2 id (any triple number = -1)\
After Sorting the array, we just need to check if the array meets the first criteria.
```
if x[i] == x[i+1] and x[i] != 0  and x[i] !=x[i+2]:
			answer = answer + 1
			i = i + 1
```
If not
```
elif x[i] == x[i+1] and  x[i] == x[i+2] and x[i]!= 0:
			answer = -1
			break
```
If not\
```answer = 0```

Then just print the (answer).

# Dragons (230A).
[Submission Link](http://codeforces.com/contest/230/submission/42707565)\
Sorting Method : Shell Sort.\
The first line contains two space-separated integers s and n\
```s,n = map(int,input().split())```\
Then the second line contains the dragon strength and the bonus strength that kirito will gett after defeating it.\
If kirito manage to defeat the dragon, the output : YES\
But if kirito lose, output : NO\
First, i make the dragon class to hold the strength and reward.
```
class Dragons:

	def __init__(self, strength, rewards):
		
		self.strength = strength
		self.rewards = rewards
 ```
 Then i make the array of the dragon.\
 ```dragon_list = []```\
Then i make a boolean that hold, whether kirito lives or dies.\
```kirito_lives = True```\
If kirito can kill the dragon, he get the rewards and proceed.
```
for dragon in range(len(dragon_list)):
	if s > dragon_list[dragon].strength:
		s = s + dragon_list[dragon].rewards
```
If kirito cant kill the dragon.
```
else:
		kirito_lives = False
		break
```
Then just print the answer.\
```print("YES" if kirito_lives else "NO")```
	
# Oath of the Night's Watch (768A).
[Submission Link](http://codeforces.com/contest/768/submission/42754181)\
Sorting Method : Comb Sort.\
The first line consists of a single integer n (the number of stewards with Jon Snow.)\
```n = int(input())```\
Second line consists of n space separated integers (the values assigned to the stewards.)\
```x = list(map(int, input().split()))```\
In this problem Jon Snow only can support a steward(n), if:\
other steward str < n and other steward str > n.(Jon Snow can support this) -> so it count as 1.\
If there is no other steward str < n and other steward str > n.\ (Jon Snow cant support this) -> count as 0.\
First sort the steward using comb sort.\
```comb_sort(x)```\
I make a variable how many steward that Jon Snow cant support.\
```cant_support = 0```\
Then just output the number of steward (n) subtracted by the steward that Jon Snow cant support (cant_support = 0).\
If it does not meet the criteria, just.\
```print(0)```





















