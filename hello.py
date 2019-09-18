# Biomed Tutorial Task
# Jehanzeb Mirza

import time

# Compute and Print Fibonacci numbers iteratively
def disp_fib(n):
    # Initial numbers
    n1 = 1
    n2 = 1

    for _ in range(n):
        print(n1)
        time.sleep(0.08)

        # Computes the next number, shifts everything over
        # n1 <- n2 <- n1 + n2
        next_number = n1 + n2
        n1 = n2
        n2 = next_number

# Simple hello world
def prompter():
    print(f'Hello World!, My name is {input("Please enter your name: ")}!')

# Main Entry point
if __name__ == '__main__':
    prompter()
    disp_fib(20)
    print('Task Complete!')

