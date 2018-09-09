class Dragons:

	def __init__(self, strength, rewards):
		
		self.strength = strength
		self.rewards = rewards

def shell_sort(arr):
    n = len(arr)
    gap = n//2
    while gap > 0:
        for i in range(gap,n):
            temp = arr[i]
            j = i
            while  j >= gap and arr[j-gap].strength > temp.strength:
                arr[j] = arr[j-gap]
                j -= gap
            arr[j] = temp
        gap //= 2

dragon_list = []
kirito_lives = True 

s,n = map(int,input().split())

for i in range (n):
	dragons_str, dragons_rew = map(int,input().split())
	dragon_list.append(Dragons(dragons_str, dragons_rew))
	
shell_sort(dragon_list)

for dragon in range(len(dragon_list)):
	if s > dragon_list[dragon].strength:
		s = s + dragon_list[dragon].rewards
	else:
		kirito_lives = False
		break
print("YES" if kirito_lives else "NO")	
