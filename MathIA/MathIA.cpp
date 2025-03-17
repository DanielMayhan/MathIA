#include <iostream>

#include "ListGeneration.h"

using namespace std;

int main()
{
    list<int> n = ListGeneration::generateList();
    for (int num : n)
    {
        cout << num << endl;
    }
    
    return 0;
}


