import time

def main():
    get_name()
    calc_fib()

# Gets a user's name and displays it back to them
def get_name():
    name = input("What is your name? ")
    with open("output.txt", 'w') as fid:
        fid.write("Hello World, my name is " + name)

# Loops 20 times to write the first 20 numbers of the sequence to an with a
# output.txt 0.5 second delay after each number
def calc_fib():
    # The first 2 numbers of the fib sequence are 0 and 1
    n_0 = 0
    n_1 = 1
    with open("output.txt", 'w') as fid:
        for i in range(20):
            if i == 0:
                fid.write(str(n_0) + '\n')
            elif i == 1:
                fid.write(str(n_1) + '\n')
            else:
                # Calculates the next numbers as the sum of the previous 2
                next = n_0 + n_1
                n_0 = n_1
                n_1 = next
                fid.write(str(next) + '\n')
            time.sleep(0.5)
        fid.write("Task Complete!")
main()
