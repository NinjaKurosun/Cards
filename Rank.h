#pragma once
#include "NominalBox.h"


class Rank : public NominalBox
{
    const std::map<std::string, int> ranks =
    {
        {"2", 2},
        {"3", 3},
        {"4", 4},
        {"5", 5},
        {"6", 6},
        {"7", 7},
        {"8", 8},
        {"9", 9},
        {"10", 10},
        {"J", 11},
        {"Q", 12},
        {"K", 13},
        {"A", 14}
    };


public:
    Rank(std::string rank)
    {
        setNominal(*ranks.find(rank));
    }


};