#!/bin/python3

# Import modules/packages
from sys import argv

# Unpacking variables
script_name, arg1, arg2 = argv

#sec_arg = arg1
#thi_arg = arg2

# Taking arguments from the terminal and using it
def print_out_variables(arg_1, arg_2):
    print(f"This second: {arg_1} and third: {arg_2} arguments from the command line")

print_out_variables(arg1, arg2)

# Converting the strings to numbers and doing calculations
sec_arg = int(arg1)
thi_arg = int(arg2)

print_out_variables(sec_arg, thi_arg)

# Converting the strings to floats
first_arg = float(arg1)
second_arg = float(arg2)

print_out_variables(first_arg, second_arg)
