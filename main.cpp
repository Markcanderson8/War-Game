#include <iostream>
#include <random>


void startGame();


int main() {
 startGame();
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
 std::cout << nameOne + nameTwo;
}