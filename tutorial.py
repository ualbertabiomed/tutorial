import time

def hello_world(name):
    print("Hello World, my name is", name)

    pass

def fibonacci():
    x1 = 0 
    x2 = 1

    for i in range(0,20):
        if i == 0:
            x1 = 0
            print(x1)
            time.sleep(1)
        elif i == 1:
            x2 = 1
            print(x2)
            time.sleep(1)
        else:
            x3 = x1 + x2
            print(x3)
            x1 = x2
            x2 = x3
            time.sleep(1)
            i += 1
    print("Task Complete!")

    pass

if __name__ == "__main__":
    name = input("Enter your name: ")
    hello_world(name)
    fibonacci()