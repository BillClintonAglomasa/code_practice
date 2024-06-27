#!/bin/python3
from sys import argv

# Unpacking variables
script, filename = argv


# Taking input from the user and formatting a text to incoporate the inputs
age = input("How old are you? ")
height = input("How tall are you? ")
weight = input("How much do you weigh? ")
print(f"So, you're {age} old, {height} tall and {weight} heavy.")

# Opening, reading and printing file content to the screen
txt = open(filename)
print(f"Here's your file {filename}:")
print(txt.read())

print("Type the filename again:")
file_again = input("> ")
txt_again = open(file_again)
print(txt_again.read())

# Formatting text and poem with f"" and escapes 
print("Let's practice everything.")
print("You\'d need to know \'bout escapes with \\ that do \n newlines and \t tabs.")

poem = """
\tThe lovely world
with logic so firmly planted
cannot discern \n the needs of love
nor comprehend passion from intuition
and requires an explanation
\n\t\twhere there is none.
"""

print("--------------")
print(poem)
print("--------------")

# Doing maths by incoparating f"", .format() and a function
five = 10 - 2 + 3 - 6 
print(f"This should be five: {five}")

# Function to compute number of food products
def secret_formula(start_point):
    jelly_beans = start_point * 500
    jars = jelly_beans / 1000
    crates = jars + 100
    return jelly_beans, jars, crates


start_point = 10000
beans, jars, crates = secret_formula(start_point)

# remember that this is another way to format a string
print("With a starting point of: {}".format(start_point))

# it's just like with an f"" string
print(f"We'd have {beans} beans, {jars} jars, and {crates} crates.")

start_point = start_point / 10

print("We can also do that this way:")
formula = secret_formula(start_point)
# this is an easy way to apply a list to a format string
print("We'd have {} beans, {} jars, and {} crates.\n\n".format(*formula))


# Experimenting with if statements
people = 20
cats = 30
dogs = 15

if people < cats:
    print("Too many cats! The world is doomed!")

if people > cats:
    print("Not many cats! The world is saved!")

if people < dogs:
    print("The world is drooled on!")

if people > dogs:
    print("The world is dry!")


dogs += 5

if people >= dogs:
    print("People are greater than or equal to dogs.")

if people <= dogs:
    print("People are less than or equal to dogs.")

if people == dogs:
    print("People are equal to dogs.\n\n")
