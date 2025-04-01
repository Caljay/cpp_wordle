#include <iostream>
#include <string>
#include "WordleGame.h"
/*
 WORDLE:
 GENERATE LIST OF POSSIBLE WORDS
 PICK A SECRET WORD
 GET USER INPUT
 COMPARE USER INPUT TO SECRET WORD
 GIVE TO THE USER:
    CORRECTLY PLACED (WITH DASHES)
    INCORRECTLY PLACED (IN ORGINAL LOCATION)
    LEAVE "NOT IN WORD" FOR USER TO FIGURE OUT
LIMIT AMOUNT OF GUESS (E,M,H)

 */
#define MAX_WORD_LENGTH 5

enum difficulty{easy, medium, hard}; //difficulty for later

void init(WordleGame* game) {

    game->replay();

}



void play() {
    WordleGame game;
    //change this to use unqiue/smart pointers
    init(&game);
std::string guess;
    //change this for the difficulty
    int max_guesses = 10;
    int guesses = 0;
    while (game.play  && guesses < max_guesses) {

        std::cout << "Enter a guess: ";
        std::cin >> guess;
        if (guess.length() != MAX_WORD_LENGTH) {
            std::cout << "Improper Guess Length!" << std::endl;
            continue;
        }
        guesses++;
        game.provide_user_hint(guess);




    }


}

int main() {


    play();
    return 0;
}
