#include "CPPSort.h"

#include <iostream>
#include <list>

#include "../Functions/Functions.h"


void CPPSort::SortList(std::list<int> list)
{
    std::cout << "Using integrated sorting Algorithm. Time: ";

    uint64_t startTime = Functions::getStartingTime();

    list.sort();

    std::cout << Functions::getTimeDifference(startTime) << " milliseconds.";
}

