#!/bin/python3

# Import modules
from sys import argv

# Assigning arguments to argv
script_name, filename = argv

print(f"We're going to erase {filename}.")
print("If you don't want that, hit CTRL-c (^C).")
print("If you do want that, hit RETURN.")

input("?")

print("Opening the file...")
target = open(filename, 'w')

print("Truncating the file. Goodbye!")
target.truncate()

print("Now I'm going to ask you for three lines.")

line1 = input("line 1: ")
line2 = input("line 2: ")
line3 = input("line 3: ")

print("I'm going to write these to the file.")

#Using the f and .format() to write to file
target.write("{}\n{}\n{}\n".format(line1, line2, line3))
target. write(f"{line1}\n{line2}\n{line3}\n")

print("And finally, we close it.")
target.close()
