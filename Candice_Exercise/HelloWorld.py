import time
name = raw_input("Enter your name: ")
print "Hello world, my name is",name

a = 0
b = 1
c = 0
count = 0

while count <= 19:
      print(a)
      c = a + b
      a = b
      b = c
      count = count + 1
      time.sleep(1)

print("Task complete")
