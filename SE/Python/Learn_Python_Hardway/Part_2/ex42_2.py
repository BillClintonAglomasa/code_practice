#!/bin/python3

## Animal is-a object(yes, sort of confusing) look at the extra credit
class Animal(object):

    def __init__(self, name, phylum):
        self.name = name
        self.phylum = phylum
        
    def print_details(self):
        print(f"{self.name} is my name. I am from the phylum {self.phylum}")

    def print_name(self):
        print(f"My name is {self.name}")

## Dog is-a Animal class
class Dog(Animal):

    def __init__(self, name, breed, favouritefood):
        ## Dog has-a name
        self.name = name
        self.breed = breed
        self.favouritefood = favouritefood

## Cat is-a Animal
class Cat(Animal):
    
    def sound(self):
        return "Meow!!"

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

    def __init(self, name, salary, organization):
        ## Employee
        super(Employee, self).__init__(name)
        ## Employee has-a salary
        self.salary = salary
        self.organization = organization

## Fish is-a object
class Fish(object):

    def __init__(self, species):
        self.species = species

## Salmon is-a Fish
class Salmon(Fish):

    def __init__(self, weight, age):
        self.weight = weight
        self.age = age

## Halibut is-a Fish
class Halibut(Salmon):
    
    def __init__(self, weight, age, harvest_date):
        super(Halibut, self).__init__(weight, age)
        self.harvest_date = harvest_date

    def details(self):
        return f"This fish has {self.weight}g weight, {self.age} wks old and harvested on {self.harvest_date}."

# Creating an instance of an animal class
#Janice = Animal("Fortis", "Animalia")

# Printing the memory location and the type of class the object is related to 
#print(Janice)

# Applying methods to the instance of the Animalia class 
#print(Janice.print_details())
#print(Janice.print_name())


# Creating an instance of a dog class
#rover = Dog("Tutela", "Rotweiler", "Gravels")

# Using a parent method in which rover do not have a particular attribute
#print(rover.print_details())

# Using a parent method in which the child class has the attribute
#print(rover.print_name())

# Assesssing the name attribute in the child class
#print(rover.name)


# Creating a class without attributes but those inherited from the parent
#Don = Cat()

# This will print an error message insisting that two positional arguments
# have not been added during the instantiation of the Cat() class. This is
# because the Cat class inherits from the Animal class and automatically
# picks the attributes in the Animal if non is defined in it's init function
#print(Don)

# Creating a class with the idea that it inherits from the parent class
#Don = Cat("Donelo", "Animalia")

# Using print and not return statement in a function of a class
# When a method is created using the print statement instead of the return
# statement, "None" is implicitly passed along with the string and "None"
# is also printed
#print(Don.print_details())

# Using the return instead of the print statement
# This returns the string without "None" implicitly passed along
#print(Don.sound())


## Mary is-a Person
#mary = Person("Mary", "23-04-94", "Accra", 31)

## frank is-a employee
#frank = Employee("Frank", 6000, "NCHS")

#fish_bought = Halibut(30, 6, "26-07-24")
#detail_fish = fish_bought.details()
#print(detail_fish)
