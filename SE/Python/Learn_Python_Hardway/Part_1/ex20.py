#!/bin/python3

# Import module
from sys import argv

# Unparking variables to argv
script, input_file = argv

# Function to print text from a file
def print_all(f):
    print(f.read())

# Function to send the starting point of reading a file to the first line
def rewind(f):
    f.seek(0)

# Function to print the line number and then to read that line in a file
def print_a_line(line_count, f):
    print(line_count, f.readline())

# Set an file object to be read to current_file variable
current_file = open(input_file)


print("First let's print the whole file:\n")

# Prints the whole text in the file to output/screen
print_all(current_file)

print("Now let's rewind, kind of like a tape.")

# Set the line to be read to 0
rewind(current_file)

print("Let's print three lines:")
# Set the line to be read in the file to one
current_line = 1

# Prints the first number and the line on the same line
print_a_line(current_line, current_file)

# Increment line to be read by one
current_line +=1

# Print the line to be read and the contents on that line
print_a_line(current_line, current_file)

# Increment the line to be read by one and read the content to screen
current_line +=1
print_a_line(current_line, current_file)
