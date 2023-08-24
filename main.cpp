#include <iostream>
#include "Card.h"

int main()
{
    Rank q("Q");
    Rank k("K");
    if (q == k)
        std::cout << "start working" << std::endl;
    return 0;
}