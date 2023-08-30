#include <iostream>
#include "Card.h"
#include <map>


int main()
{

    std::pair<int, int> first(1,2);
    std::pair<int, int> second(2,1);

    Suit::setTrump("DIAMONDS");
    Card c_first(Rank("Q"), Suit("DIAMONDS"));
    Card c_second(Rank("K"), Suit("HEARTS"));
    std::cout << (c_first < c_second) << std::endl;

    std::cout << (first < second) << std::endl;

    return 0;
}