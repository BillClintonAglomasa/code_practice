#!/bin/python3

from sys import exit

def gold_room():
    choice = int(input("This room is full of gold. How much do you take? "))

    if choice < 50:
        print("Nice, you're not greedy, you win!")
        exit(0)
    else:
        dead("You greedy bastard!")

        
def bear_room():
    print("""There is a bear here.
    The bear has a bunch of honey.
    The fat bear is in front of another door.
    How are you going to move the bear?
    Will you either 'take honey', 'taunt bear', 'open door' or do something else?\n""")

    bear_moved = False

    while True:
        choice = input("> ")

        if choice == "take honey":
            dead("The bear looks at you then slaps your face off.")

        elif choice == "taunt bear" and not bear_moved:
            print("The bear has moved from the door.")
            print("You can go through it now.")
            bear_moved = True

        elif choice == "taunt bear" and bear_moved:
            dead("The bear gets pissed off and chews your leg off.")

        elif choice == "open door" and bear_moved:
            gold_room()

        else:
            print("I got no ideas what that means.")


def cthulhu_room():
    print("""Here you see the great evil Cthulhu.
    He, it, whatever stare at you and you go insane.
    Choose either of the words in quotation marks.
    Do you 'flee' for your life or eat your 'head' or you have 'ideas'?\n""")

    choice = input("> ")

    if "flee" in choice:
        start()
    elif "head" in choice:
        dead("Well that was tasty!")
    else:
        cthulhu_room()


def dead(why):
    print(why, "Good job!")
    exit(0)

def start():
    print("""You are in a dark room.
    There is a door to your right and left.
    Which one do you take?\n""")

    choice = input("> ")

    if choice == "left":
        bear_room()
    elif choice == "right":
        cthulhu_room()
    else:
        dead("You stumble around the room until you starve.")

start_room()
