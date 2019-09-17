#U of A Biomed tutorial assignment
import time
import sys

#Defining the Greeting function
def greeting(name):
    return "Hello World, my name is {0}".format(name);

#Defining the Fibonnacci Function
def fibonnacci():
    fibonnacci_nums=[];
    for i in range(20):
        if (i<2):
            fibonnacci_nums.append(i);
        else:
            fibonnacci_nums.append(fibonnacci_nums[i-1]+fibonnacci_nums[i-2]);
        time.sleep(.3);
        print (fibonnacci_nums[i]);
    print("Task Complete!");

#The main function
if __name__ == "__main__":
    
    #Function call for the greeting
    name = input("Enter your name: ");
    print(greeting(name));

    print("Here are the first 20 numbers in the Fibonnacci Sequence");
    #Function call for the Fibonnacci
    fibonnacci();
