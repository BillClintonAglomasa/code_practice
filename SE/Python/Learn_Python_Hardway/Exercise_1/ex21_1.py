#!/bin/python3

# I am trying to implement this
result = 24 * 36 + 96 - 24 / 39 * (49 - 3)
print("I am trying to implement the equation below\n")
print(f"24 * 36 + 96 - 24 / 39 * (49 - 3) which equals {result}\n")

# Functions to make me implement the maths expression
def series_1(a, b):
    print(f"Subract {b} from {a}")
    return a - b

def series_2(a, b):
    print(f"Multiply {a} by {b}")
    return a * b

def series_3(a, b):
    print(f"Divide {a} by {b}")
    return a / b

def series_4(a, b):
    print(f"Add {a} to {b}")
    return a + b

# Variables needed for implementation
a = 49
b = 3
c = 24
d = 36
e = 39
f = 96
implementation = series_1(series_4(series_2(c, d), f),series_2(series_3(c, e), series_1(a, b)))

print(f"\nInitial value is {result} while implementation is {implementation}")
