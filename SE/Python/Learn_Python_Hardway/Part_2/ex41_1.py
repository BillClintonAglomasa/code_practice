#!/bin/python3

# Import modules
import random
from urllib.request import urlopen
import sys

WORD_URL = "http://learncodethehardway.org/words.txt"
WORDS = []

# Creating a dictionary that contain classes and their values ie. either functions or attributes
PHRASES = {
    "class %%%(%%%):":
      "Make a class named %%% that is-a %%%.",
    "class %%%(object):\n\tdef __init__(self, ***)" :
      "class %%% has-a __init__ that takes self and *** params.",
    "class %%%(object):\n\tdef ***(self, @@@)":
      "class %%% has-a function *** that takes self and @@@ params.",
    "*** = %%%()":
      "Set *** to an instance of class %%%.",
    "***.***(@@@)":
      "From *** get the *** function, call it with params self, @@@.",
    "***.*** = '***'":
      "From *** get the *** attribute and set it to '***'."
    }

# Checks the length of variables from the command line and if argument 1 == "english"
if len(sys.argv) == 2 and sys.argv[1] == "english":
    PHRASE_FIRST = True
else:
    PHRASE_FIRST = False

# Open the url and encodes the words in "utf-8" format
for word in urlopen(WORD_URL).readlines():
    WORDS.append(str(word.strip(), encoding="utf-8"))

# A function that creates the name of classes, functions and parameters
# using words saved to WORDS, gotten from the url. It then replaces all
# the names of the classes, functions and parameters with new ones
# from a unique sample from WORDS. It then returns a list 
def convert(snippet, phrase):
    class_names = [w.capitalize() for w in
                   random.sample(WORDS, snippet.count("%%%"))]
    other_names = random.sample(WORDS, snippet.count("***"))
    results = []
    param_names = []

    for i in range(0, snippet.count("@@@")):
        param_count = random.randint(1,3)
        param_names.append(', '.join(
            random.sample(WORDS, param_count)))

    for sentence in snippet:
        result = sentence[:]

        # Fake class names
        for word in class_names:
            result = result.replace("%%%", word, 1)

        # Fake other names
        for word in other_names:
            result = result.replace("***", word, 1)

        # Fake parameter lists
        for word in param_names:
            result = result.replace("@@@", word, 1)

        results.append(result)

    return results


# This is a try and except that prints to the screen the return
# values gottten from the convert function. It has a while loop
# that pertutually runs until there is EOFError
try:
    while True:
        snippets = list(PHRASES.keys())
        random.shuffle(snippets)

        for snippet in snippets:
            phrase = PHRASES[snippet]
            
            answer = convert(snippet, phrase)
    
            print(f"ANSWER: {final_answer}\n\n")
except EOFError:
    print("\nBye")
