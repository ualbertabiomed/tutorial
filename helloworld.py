from time import sleep
name = input("Please enter your name!")
print ("Hello world, my name is",name)
sleep(2)
a = 0
b = 1
count = 0

while count <=19:
    print(a)
    n = a+b
    a = b
    b = n
    count = count +1
    sleep(2)

print ("Task Complete!")
