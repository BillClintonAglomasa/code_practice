#!/bin/python3

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

# Introducing some Boolean operators

if (people > dogs) and (people > cats):
    print("Wow!. The populations of cats and dogs does not match humans")

dogs += 5

if people >= dogs:
    print("People are greater than or equal to dogs.")

if people <= dogs:
    print("People are less than or equal to dogs.")

if people == dogs:
    print("People are dogs.")

if (people > cats) or (people < cats):
    print("In the end, one may outnumber the other party")
