#pragma once
#include "NominalBox.h"


class Suit : public NominalBox
{
    const std::map<std::string, int> suits =
    {
        {"HEARTS"  , 0},
        {"DIAMONDS", 1},
        {"CLUBS"   , 2},
        {"SPADES"  , 3}
    };


public:
    Suit(std::string suit)
    {
        setNominal(*suits.find(suit));
    }


};