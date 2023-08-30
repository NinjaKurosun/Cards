#pragma once
#include "NominalBox.h"


class Suit : public NominalBox
{
    static std::map<std::string, int> suits;


public:
    Suit(std::string suit)
    {
        setNominal(*suits.find(suit));
    }


    static void setTrump(std::string suit)
    {
        suits.find(suit)->second = 1;
    }



};



/*static*/ std::map<std::string, int> Suit::suits =
{
    {"HEARTS"  , 0},
    {"DIAMONDS", 0},
    {"CLUBS"   , 0},
    {"SPADES"  , 0}
};