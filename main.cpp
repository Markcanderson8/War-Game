#include <iostream>
#include <random>
#include <array>


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
 std::array<std::string, 4> suits = {"Spades", "Clubs", "Hearts", "Diamonds"};
 std::array<std::string, 13> cardValues = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
 for(int i = 0; i < suits.size(); i++) {
   std::cout << suits[i] << std::endl;
 }
}