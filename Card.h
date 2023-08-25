#pragma once
#include <map>
#include <string>
#include <iostream>


enum class Suits
{
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES
};

class Rank
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

    std::pair<std::string, int> mRank;

public:
    Rank(std::string rank)
    {
        mRank = *(ranks.find(rank));
    }

    friend bool operator<(const Rank& first, const Rank& second)
    {
        return (first.mRank.second < second.mRank.second);
    }
    friend bool operator>(const Rank& first, const Rank& second)
    {
        return !(first < second);
    }
    friend bool operator==(const Rank& first, const Rank& second)
    {
        return (first.mRank.second == second.mRank.second);
    }

    std::string getRank()
    {
        return mRank.first;
    }

};

struct Card
{
    Rank ranking;
    Suits suit;
};