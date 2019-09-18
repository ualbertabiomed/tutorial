def helloworld():

    def greeting():

        print("What is your name?")
        Name = input()
        print("Hello World, my name is", Name)

    greeting()

    def fibonacci():

        num_1 = 0
        num_2 = 1

        import time
        time.sleep(1)
        print(num_1)
        import time
        time.sleep(1)
        print(num_2)
        import time
        time.sleep(1)

        for i in range(1, 20):
            new_num = num_1 + num_2
            num_1 = num_2
            num_2 = new_num
            print(new_num)

            import time
            time.sleep(1)

    fibonacci()

    import time
    time.sleep(1)

    print("Task Complete!")


helloworld()