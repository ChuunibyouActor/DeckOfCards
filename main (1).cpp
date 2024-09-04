#include <cstdlib>
#include <iostream>
#include "DeckOfCards.h"
// Main method to begin inputing and executing code.
int main (){
// Set up the deck and deal the 5 cards.
DeckOfCards d = DeckOfCards();
vector<Card> hand;
cout << "The cards you have been dealt are: " << endl;
for (int i=0; i<5; i++){
hand.push_back(d.dealCard());
hand[i].toString();
}
// Check to see for pair(s).
int flag = 0;
for (int i=0; i<5; i++){
for (int j = i+1; j<5; j++){
if ((hand[i].getFace()).compare(hand[j].getFace()) == 0 && i != j){
flag++;
}
}
}
if (flag == 1){
cout << "Hand Contains a Pair" << endl;
}
if (flag > 1){
cout << "Hand Contains 2 Pairs" << endl;
}
flag = 0;
// Check to see for triple.
for (int i=0; i<5; i++){
for (int j = i+1; j<5; j++){
for (int k= j+1; k<5; k++){
if ((hand[i].getFace()).compare(hand[j].getFace()) == 0 && (hand[i].getFace()).compare(hand[k].getFace()) == 0 && i != j != k){
flag++;
}
}
}
}
if (flag){
cout << "Hand contains a three of a kind" << endl;
flag = 0;
}
}
