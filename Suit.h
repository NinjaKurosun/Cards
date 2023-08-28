#pragma once
#include "NominalBox.h"


class Suit : public NominalBox
{
    const std::map<std::string, int> suits =
    {
        {"HEARTS"  , 0},
        {"DIAMONDS", 0},
        {"CLUBS"   , 0},
        {"SPADES"  , 0}
    };


public:
    Suit(std::string suit)
    {
        setNominal(*suits.find(suit));
    }


};