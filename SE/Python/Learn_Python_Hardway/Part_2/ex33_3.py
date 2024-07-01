#!/bin/python3

# Function to iterate using a while loop
def for_loop(start, end, increase_by):
    numbers = []

    for i in range(start, end, increase_by):
        print(f"At the top i is {i}")
        numbers.append(i)
        print("Numbers now: ", numbers)
        print(f"At the bottom i is {i}")

for_loop(2, 1000, 100)
