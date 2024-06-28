#!/bin/python3

# Import modules
from sys import argv
from os.path import exists

# Setting arguments to argv
script, from_file, to_file = argv

# Check if file to be written to exist
print(f"Does the output file eixst? {exists(to_file)}")

# Opening and reading file to a variable 
in_file = open(from_file).read()

# Erase previous content/create file and write to it.
open(to_file, 'w').write(in_file)
