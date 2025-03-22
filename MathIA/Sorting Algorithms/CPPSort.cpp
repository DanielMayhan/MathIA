#include "CPPSort.h"

#include <iostream>
#include <list>

#include "../Functions/Functions.h"


void CPPSort::SortList(std::list<int> list)
{
    uint64_t startTime = Functions::getStartingTime();

    list.sort();

    std::cout << "Integrated Sort finished: " << Functions::getTimeDifference(startTime) << " ms" << '\n';
}

