#include <vector>
#include "Card.h"
// The main class header for the DeckOfCards class.
class DeckOfCards{
public:
// Declares the public function
DeckOfCards();
void shuffle();
Card dealCard();
bool moreCards();
private:
vector<Card> deck;
int currentCard;
void swap(int, int);
};