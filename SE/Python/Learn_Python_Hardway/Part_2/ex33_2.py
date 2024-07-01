#!/bin/python3

# Function to iterate using a while loop
def while_loop(num, increase_by):
    i = 0
    numbers = []

    while i < num:
        print(f"At the top i is {i}")
        numbers.append(i)
        i += increase_by
        print("Numbers now: ", numbers)
        print(f"At the bottom i is {i}")
        
while_loop(100, 5)
