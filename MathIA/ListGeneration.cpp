#include "ListGeneration.h"

#include <iostream>
#include <list>
#include <ostream>
#include <cstdlib>
#include <thread>

void ListGeneration::updateProgress(double counte1, int listlength1)
{
    std::cout << counte1/(double)listlength1 << "%";
}

void ListGeneration::generateList()
{
    srand(time(NULL));
    int listlength = 0;
    
    std::cout << "Generating List" << '\n';
    std::cout << "Specify List length: ";
    std::cin >> listlength;
    double counter = 1;

    std::thread test(updateProgress, counter, listlength);
    
    
    std::list<int> myNumbers;
    for (int i = 0; i < listlength; i++)
    {
        int number = rand();
        myNumbers.push_back(number);
        //std::cout << "                                             " << '\r';
        //std::cout << (counter / listlength) * 100 << "%" << '\r';
        counter++;
    }

    test.join();
    
    /*
    for (int n : myNumbers)
    {
        std::cout << n << ", ";
    }
    */
}

