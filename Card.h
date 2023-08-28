#pragma once
#include <iostream>
#include "Suit.h"
#include "Rank.h"


struct Card
{
    Rank ranking;
    Suit suit;

    Card(Rank lRank, Suit lSuit) : ranking(lRank), suit(lSuit)
    {
    }
};