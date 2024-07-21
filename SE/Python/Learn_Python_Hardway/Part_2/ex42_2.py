#!/bin/python3

## Animal is-a object(yes, sort of confusing) look at the extra credit
class Animal(object):

    def __init__(self, name, phylum, species):
        self.name = name
        self.phylum = phylum
        self.species = species
        
    def print_details(self):
        print(f"{name} is my name. I am from the phylum {phylum} and the species {species}")

## Dog is-a Animal class
class Dog(Animal):

    def __init__(self, name, breed, favouritefood):
        ## Dog has-a name
        self.name = name
        self.breed = breed
        self.favouritefood = favouritefood

## Cat is-a Animal
class Cat(Animal):

    def __init__(self, name, furcolor):
        ## Cat has-a name
        self.name = name
        self.furcolor = furcolor

    def cry(self):
                 print("Meow!!")

## Person is-a object
class Person(object):

    def __init__(self, name, dof, location, age):
        ## Person has-a name
        self.name = name
        self.dof = dof
        self.location = location
        self.age = age

        ## Person has-a pet of some kind
        self.pet = None

## Employee is-a Person
class Employee(Person):

    def __init(self, name, salary):
        ## Employee
        super(Employee, self).__init__(name)
        ## Employee has-a salary
        self.salary = salary

## Fish is-a object
class Fish(object):
    pass

## Salmon is-a Fish
class Salmon(Fish):
    pass

## Halibut is-a Fish
class Halibut(Fish):
    def print_name(sel):
        print_name = pri
    pass


## rover is-a Dog
rover = Dog("Rover", "Rotweiler", "Gravels")
print(rover.breed)
print(rover.name)
## satan is-a Cat
satan = Cat("Satan")
print(satan.cry())
## Mary is-a Person
mary = Person("Mary")

## mary has-a pet
mary.pet = satan

## frank is-a employee
frank = Employee("Frank")

## frank has-a pet
frank.pet = rover

## flipper is-a Fish
flipper = Fish()

## crouse is-a Salmon
crouse = Salmon()

## harry is-a Halibut
harry = Halibut()
