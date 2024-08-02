#!/bin/python3

class Parent(object):

    def implicit(self):
        print("PARENT implicit()")

class Child(Parent):

    def override(self):
        print("CHILD override()")

dad = Parent()
son = Child()

dad.implicit()
son.implicit()
