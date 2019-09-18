import time

fin = open('output.txt', 'w')

def greetings() :
	'''Asks user for name and prints it in the command line.'''
	name = input('Enter your name : ')
	output1 = 'Hello World! My name is ' + name + '!\n'
	fin.write(output1)

def fibb() : 
	'''Finds the first 20 terms of the Fibbonacci Sequence and prints them line by line with an interval of 0.2s.'''
	fibList = [0, 1]
	
	for i in range(0, 19) :
		newN = fibList[i] + fibList[i+1]
		fibList.append(newN)
		fin.write(str((fibList[i])) + '\n')
		time.sleep(0.2)
	
	fin.write('Task Complete')

if __name__ == '__main__' :
	greetings()
	fibb()
	fin.close()