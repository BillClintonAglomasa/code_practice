#!/bin/python3

class Song(object):

    def __init__(self, lyrics):
        self.lyrics = lyrics

    def sing_me_a_song(self):
        for line in self.lyrics:
            print(line)

happy_bday = Song(["Happy birthday to you",
                   "I don't want to get sued",
                   "So, I'll stop right there"])

bulls_on_parade = Song(["They rally around tha family",
                        "With pockets full of shells"])

my_song = """
This is love and I am enjoying it anyway.
I do not know when it will last.
So, I will enjoy it while it lasts."""

happy_bday.sing_me_a_song()

bulls_on_parade.sing_me_a_song()

new_song = Song(my_song)
new_song.sing_me_a_song()
