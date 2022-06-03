#include <iostream>
#include <random>
#include <vector>
#include <map>
#include <ctime>
#include <algorithm>
#include <chrono>

void startGame();

std::vector<std::string> shuffleCards();

void dealCards(std::vector<std::string> array);


int main() {
 startGame();
 auto shuffled = shuffleCards();
 // for(std::string i : shuffled) {
 //  std::cout << i << std::endl;
 // }
 dealCards(shuffled);
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

std::vector<std::string> shuffleCards() {
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

 return allRandomCards;
}

template<typename T>
void slice(std::vector<T> &v, int m, int n)
{
    int k = n - m + 1;
 
    auto it = v.cbegin() + m;
    while (it != v.cend() && k--) {
        it = v.erase(it);
    }
}


void dealCards(std::vector<std::string> array) {
    std::vector<std::string> v = array;
    std::vector<std::string> w = array;
    int m = 0, n = 25;
    int o = 26, p = 52;
    slice(v, m, n);
    slice(w, o, p);

 
    for (std::string const &i: v) {
        std::cout << i << std::endl;
    }

     for (std::string const &i: w) {
        std::cout << i << std::endl;
    }
}