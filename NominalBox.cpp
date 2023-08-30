#include "NominalBox.h"


NominalBox::NominalBox()
{
}

std::string NominalBox::toString() const
{
    return mNominal.first;
}


/*friend*/ bool operator<(const NominalBox& first, const NominalBox& second)
{
    return (first.mNominal.second < second.mNominal.second);
}

/*friend*/ bool operator>(const NominalBox& first, const NominalBox& second)
{
    return !(first < second);
}

/*friend*/ bool operator<=(const NominalBox& first, const NominalBox& second)
{
    return (first.mNominal.second <= second.mNominal.second);
}

/*friend*/ bool operator>=(const NominalBox& first, const NominalBox& second)
{
    return !(first <= second);
}

/*friend*/ bool operator==(const NominalBox& first, const NominalBox& second)
{
    return (first.mNominal.second == second.mNominal.second);
}

/*friend*/ std::ostream& operator<<(std::ostream& out, const NominalBox& box)
{
    out << box.toString();
    return out;
}


void NominalBox::setNominal(const std::pair<std::string, int>& nominal)
{
    mNominal = nominal;
}