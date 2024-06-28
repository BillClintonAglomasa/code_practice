#!/bin/python3

# Import module
from sys import argv

# Arguments given to argv
script, filename = argv

# Open the filename
txt = open(filename)

# Add text to filename
print(f"Here's your file {filename}:")
print(txt.read())

#print("Type the filename again:")
#file_again = input("> ")

#txt_again = open(file_again)

#print(txt_again.read())

#closing the text file
txt.close()
