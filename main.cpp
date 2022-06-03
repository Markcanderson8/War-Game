#include <iostream>
#include <random>
#include <vector>
#include <map>
#include <ctime>
#include <algorithm>
#include <chrono>

void startGame();

void shuffleCards();


int main() {
 startGame();
 shuffleCards();
 return 0;
}

void startGame() {
 std::string nameOne = "";
 std::string nameTwo = "";

 std::cout << "\tWELCOME TO WAR" << std::endl;
 std::cout << std::endl;
 std::cout << "Enter Player one's name: ";
 std::cin >> nameOne;
 std::cout << "Enter Player two's name: ";
 std::cin >> nameTwo;
}

void shuffleCards() {
 srand(time(0));
 int random = rand() % 52;
 std::vector<std::string> suits = {"Spades", "Clubs", "Hearts", "Diamonds"};
 std::vector<std::string> cardValues = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
 std::vector<std::string> allRandomCards = {};

 for(int i = 0; i < suits.size(); i++) {
   for(int j = 0; j < cardValues.size(); j++) {
     allRandomCards.push_back(cardValues[j] + " of " + suits[i]);
   }
 }
 int seed = std::chrono::system_clock::now().time_since_epoch().count();
 std::shuffle(allRandomCards.begin(), allRandomCards.end(), std::default_random_engine(seed));

 for(int i = 0; i < allRandomCards.size(); i++) {
  std::cout << allRandomCards[i] << std::endl;
 }
}