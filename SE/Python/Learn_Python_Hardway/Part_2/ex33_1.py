#!/bin/python3

# Function to iterate using a while loop
def while_loop(num):
    i = 0
    numbers = []

    while i < num:
        print(f"At the top i is {i}")
        numbers.append(i)
        i += 1
        print("Numbers now: ", numbers)
        print(f"At the bottom i is {i}")
        
while_loop(4)
