#include "ListGeneration.h"

#include <iostream>
#include <list>
#include <ostream>
#include <cstdlib>
#include <thread>

std::list<int> ListGeneration::generateList()
{
    srand(time(NULL));
    int listlength = 0;
    
    std::cout << "Generating List" << '\n';
    std::cout << "Specify List length: ";
    std::cin >> listlength;
    double counter = 1;
    
    
    std::list<int> myNumbers;
    for (int i = 0; i < listlength; i++)
    {
        int number = rand();
        myNumbers.push_back(number);
        counter++;
    }
    
    return myNumbers;
}

