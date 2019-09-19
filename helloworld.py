import time

name = input("What is your name?\n")
print("Hello {}".format(name))


a = 0
b = 1
c = 0
for x in range(20):
    print(b)
    c = a + b
    a = b
    b = c
    time.sleep(0.01)

print("Task completed!")
