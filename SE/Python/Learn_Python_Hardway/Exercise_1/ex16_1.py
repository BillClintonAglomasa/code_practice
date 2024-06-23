#!/bin/python3

# Importing functions
from sys import argv

# Setting arguments to argv
script_name, filename = argv

# Opening the file for reading
txt = open(filename, "r")

# Reading the file and printing it to screen
print(txt.read())

# Closing the file after reading
txt.close()
