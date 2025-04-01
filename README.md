# C++ Wordle
I wanted to learn how to use C++ (as I only know C really and "like" some higher level features such as `std::string`) for projects and ideas!

## Overview
Plays a very basic version of Wordle, with 5 letters per word. Allows replaying, provides hints (to an extent)

### Building
Dependencies: `Make` and `g++`
running `make` should build the game in `/build/main`\
Could also compile and link manually. The file WORDS.txt MUST be included as it is used for getting the words

#### Rational
I always enjoy using C but find it a bit hard to find/use libaries and tools and make projects that are bigger since everything needs to be done by scratch and some things (strings especially) are harder to work with.\
Recently I have used Java for a Data Structures class and have liked some of the reduced complexities from C but did not like the JVM/JRE overhead\
So I thought, C++ could be good to learn! And this is the C++ version of a simplified project from that class\
 \
 **Overview Of Code**\
 One big thing, I wanted to actually use C++ and not C with `std::string` and `std::cout`/`std::cin`\
 so here is an overview of my through process\
  \
  `main.cpp`:\
  Contains the main entry point of the program, most of the logic is not in this file\
  it only calls a `play()` function which `init(WordleGame* game)`s the game and gets the user input and such\
  for `init(WordleGame* game)` I used raw pointers since only a single function on the `WordleGame` class needs to be called and kept on the instance

`WordleGame.cpp`:\
This is most of the game and contains nearly all the logic.\
I will run through it as if the program was running\
 \
`WordleGame()`: constructor whcih calls the  `get_possible_words()` and `get_secret_word()` functions\
`get_possible_words()`: reads from a file using `std::ifstream` and adds each word (5 letters) to a `std::vector<std::string>` using `push_back()`\
`get_secret_word()`: randomly selects a word from the `possible_words` string vector using `srand`, `rand` and `at()`\
 \
 Next the game takes guesses from the user (from main.cpp)\
 `provide_user_hint`: takes in the guess and runs through a basic alogirthm to find which letters are in the correct spot and in the secret then prints it to the user also checks if the user has won, and if so starts the "win" condition
 `is_win()`: if the player has won, this function is called and prints basic "you won" and asks to replay

 # Thoughts
 Turned out to be a lot simplier doing this in C++ compared to Java for me (could be that I am just smarter)
and C++ seems to be simplier than people make it out to be as long as you realize C and C++ are _NOT_ the same language even\
if they make look similar.\
I think I will start using C++ more often as it will be helpful for projects that I have in mind, but would like to not just "not use" C\
Learning how to use CMake, Make, and using C and C++ in the same project is where more knowledge could be useful\
