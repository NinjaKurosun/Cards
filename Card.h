#pragma once
#include <ostream>
#include <map>
#include "Suit.h"
#include "Rank.h"


struct Card : public std::pair<Suit, Rank>
{
    Rank& rank = second;
    Suit& suit = first;


    Card(Rank lRank, Suit lSuit) : std::pair<Suit, Rank>(lSuit, lRank)
    {
    }


    friend std::ostream& operator<<(std::ostream& out, const Card& crd)
    {
        out << crd.second << " " << crd.first;
        return out;
    }


};