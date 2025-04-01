#ifndef WORDLEGAME_H
#define WORDLEGAME_H
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class WordleGame {
  public:
    std::vector<std::string> possible_words;
    bool play = true;
    void replay();
    void provide_user_hint(std::string guess);
    void is_win();

    WordleGame(); //does nothing currently
    ~WordleGame();

  private:
    std::string secret;
    bool has_won = false;
    void get_secret_word();
    void get_possible_words();

};


#endif //WORDLEGAME_H
