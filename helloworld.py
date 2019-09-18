import time
def helloworld():
    name = input("Input your name: ")
    print("Hello world, my name is", name)
helloworld()
def recur_fibo(n):  
   if n <= 1:  
       return n  
   else:  
       return(recur_fibo(n-1) + recur_fibo(n-2))
def display():
    for i in range(20):  
       print(recur_fibo(i))
       time.sleep(.5)
display()
print("Task Complete!")       
    
    
