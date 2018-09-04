n, k = map(int, input().split())

x = list(map(int, input().split()))

dict = {}

for i in x:
	if i not in dict and len(dict)<k:
		dict[i] = x.index(i)+1
		

if len(dict) >= k:
  print("YES")
		
  for i in dict:
		print(dict[i], end=" ")
else:
  print("NO")
