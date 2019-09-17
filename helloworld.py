"""Made by - Tahiat Goni
Ualberta Biomed initiation task"""

#making a function for task A
def helloworld():
	name = input("Enter your name: ")
	print("Hello World,my name is %s"%(name))
	pass

#making a function for fibonacci sequence
def fibonacci():
    #importing time module for crearing a delay
    import time
    #using the initial 2 numbers to generate the sequence
    fibonacciSequence = [0,1]
    for counter in range(0,20):
        nextFibNumber = fibonacciSequence[counter] + fibonacciSequence[counter + 1]
        fibonacciSequence.append(nextFibNumber)
        print(fibonacciSequence[counter])
        time.sleep(2)
    print("Task Complete!")
    pass	

if __name__ == "__main__":
	helloworld()
	fibonacci()
	
