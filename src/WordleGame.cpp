#include "WordleGame.h"

#define PATH_TO_WORD_FILE "WORDS.txt"
//replaces and/or inits the game
void WordleGame::replay(){
    get_secret_word();

  }


 void WordleGame::get_possible_words() {

 std::string temp;
 std::ifstream file(PATH_TO_WORD_FILE);



 while(std::getline(file, temp)){

  possible_words.push_back(temp);
 }

 file.close();
};


//check if the string s, contains the char c
static bool contains(std::string s, char c){

  for(int i = 0; i < s.size(); i++){
    if(s.at(i) == c){
      return true;
    }
  }
  return false;



  }






void WordleGame::provide_user_hint(std::string guess) {

  if(secret == guess){
 has_won = true;
 is_win();
 return;
  }
  std::string correct;
  std::string incorrect;

  for(int i = 0; i < secret.size(); i++){
 if(guess[i] == secret[i]){

   correct += guess[i];
  incorrect += "-";
 }
 else{
   correct.append("-");
  if(contains(secret, guess[i])){
    incorrect += guess[i];
  }
  else{
    incorrect.append("-");

  }


 }






}
    std::cout << "Correctly Placed: " << correct << std::endl;
    std::cout << "Incorrectly Placed:  " << incorrect << std::endl;
    std::cout << "No Hint For Letters Not In Word!" << std::endl << std::endl << std::endl;

}


void WordleGame::is_win(){
  if(has_won){
    char play_again;
    std::cout << "You Win!" << std::endl;
    std::cout << "Play Again? Y/N:  " << std::endl;
    std::cin >> play_again;
    if(play_again == 'Y' || play_again == 'y'){
      play = true;
      std::cout << "Restarting Game!" << std::endl << std::endl << std::endl;
      return;

    }
    else{
      play = false;
      std::cout << "Thanks for playing!" << std::endl;

      }



  }



}


void WordleGame::get_secret_word() {
 srand(time(NULL));
 secret = possible_words.at(rand() % possible_words.size());

}








 WordleGame::WordleGame(){
 get_possible_words();
 get_secret_word();
 };





WordleGame::~WordleGame(){

  //clean up tasks; none in this case i dont think
   //going to do this with my vector of strings
 possible_words.clear();
 possible_words.shrink_to_fit();

};


