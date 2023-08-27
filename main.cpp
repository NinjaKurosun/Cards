#include <iostream>
#include "Card.h"

int main()
{
    Rank q("K");
    Rank k("Q");
    Suit s("HEARTS");
    Suit d("DIAMONDS");

    Card crd(Rank("K"), Suit("HEARTS"));
    std::cout << crd.suit << " " << crd.ranking << std::endl;
    std::cout << ((s >= d) ? s : d) << std::endl;
    if (q >= k)
        std::cout << "start working" << std::endl;
    return 0;
}