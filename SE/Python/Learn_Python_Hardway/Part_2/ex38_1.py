#!/bin/python3

ten_things = "Apples Oranges Crows Telephone Light Sugar"

print("Wait there are not 10 things in that list. Let's fix that.")

stuff = ten_things.split(' ')
more_stuff = ["Day", "Night", "Song", "Frisbee", "Corn", "Banana", "Girl", "Boy"]

count = 0
for i in stuff:
    if count <= 3:
        next_one = more_stuff.pop()
        print("Adding: ", next_one)
        stuff.append(next_one)
        print(f"There are {len(stuff)} items now.")
        count += 1
    else:
        break

print("There we go: ", stuff)

print("Let's do some things with stuff.")

print(stuff[1])
print(stuff[-1]) # whoa! fancy
print(stuff.pop())
print(' '.join(stuff)) # what? cool!
print('#'.join(stuff[3:5])) # Supper stellar!
