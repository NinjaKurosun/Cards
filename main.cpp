#include <iostream>
#include "Card.h"

int main()
{
    Rank q("Q");
    Rank k("K");
    Suit s("HEARTS");
    Suit d("DIAMONDS");
    std::cout << ((s >= d) ? s.toString() : d.toString()) << std::endl;
    if (q == k)
        std::cout << "start working" << std::endl;
    return 0;
}