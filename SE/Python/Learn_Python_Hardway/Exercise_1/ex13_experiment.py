#!/bin/python3

# Importing module
from sys import argv

# Using argv to store the script name
script = argv

# using input to also get an input from user
num_times = input("How many times have you run the {}?".format(script))

print("I have run the {} on {} times so far".format(script, num_times))
