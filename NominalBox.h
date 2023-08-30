#pragma once
#include <map>
#include <string>
#include <ostream>

class NominalBox
{
    std::pair<std::string, int> mNominal;


public:
    NominalBox();

    std::string toString() const;


    friend bool operator<(const NominalBox& first, const NominalBox& second);
    friend bool operator>(const NominalBox& first, const NominalBox& second);
    friend bool operator<=(const NominalBox& first, const NominalBox& second);
    friend bool operator>=(const NominalBox& first, const NominalBox& second);
    friend bool operator==(const NominalBox& first, const NominalBox& second);
    friend std::ostream& operator<<(std::ostream& out, const NominalBox& box);


protected:
    void setNominal(const std::pair<std::string, int>& nominal);


};