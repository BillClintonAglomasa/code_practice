#!/bin/python3

# Variable to be used
people = 30
cars = 40
trucks = 15

# This checks a condition involving cars and people
# Prints the line under if cars is greater than people
if cars > people:
    print("We should take the cars.")

# Prints the line under if cars is less than people
elif cars < people:
    print("We should not take the cars.")
    
# Prints the line under if cars is equal to people or the two conditions are not met
else:
    print("We can't decide.")

# This checks a condition involving trucks and cars
# If trucks outnumber cars, this statement is printed
if trucks > cars:
    print("That's too many trucks.")

# If cars outnumber trucks, this statement is printed
elif trucks < cars:
    print("Maybe we could take the trucks.")

# If both previous statements are not met, this line is printed
else:
    print("We still can't decide.")

# This checks a condition between people and cars
# The line under this statement is printed if people outnumber trucks
if people > trucks:
    print("Alright, let's just take the trucks.")

# This statement is printed if the previous condition is not met
else:
    print("Fine, let's stay home then.")
