#pragma once
#include <map>
#include <string>
#include <iostream>



class NominalBox
{
    std::pair<std::string, int> mNominal;


public:
    NominalBox()
    {
    }

    std::string toString()
    {
        return mNominal.first;
    }

    friend bool operator<(const NominalBox& first, const NominalBox& second)
    {
        return (first.mNominal.second < second.mNominal.second);
    }

    friend bool operator>(const NominalBox& first, const NominalBox& second)
    {
        return !(first < second);
    }

    friend bool operator<=(const NominalBox& first, const NominalBox& second)
    {
        return (first.mNominal.second <= second.mNominal.second);
    }

    friend bool operator>=(const NominalBox& first, const NominalBox& second)
    {
        return !(first <= second);
    }

    friend bool operator==(const NominalBox& first, const NominalBox& second)
    {
        return (first.mNominal.second == second.mNominal.second);
    }


protected:
    void setNominal(const std::pair<std::string, int> nominal)
    {
        mNominal = nominal;
    }

};


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

struct Card
{
    Rank ranking;
    Suit suit;

};