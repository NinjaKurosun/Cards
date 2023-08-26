#include <iostream>
#include "Card.h"

int main()
{
    Rank q("K");
    Rank k("Q");
    Suit s("HEARTS");
    Suit d("DIAMONDS");
    std::cout << ((s >= d) ? s.toString() : d.toString()) << std::endl;
    if (q >= k)
        std::cout << "start working" << std::endl;
    return 0;
}