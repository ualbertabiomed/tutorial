import time

print("Hello World, my name is Catlin Letendre.\n\n")

count = 0

F0 = 0

F1 = 1

print(F0)
time.sleep(1)
print(F1)
time.sleep(1)

for x in range(0, 18):
	F2 = F0+F1
	print(F2)
	time.sleep(1)
	F0 = F1
	F1 = F2
	
print('\n')
print('Task Complete!')

	

