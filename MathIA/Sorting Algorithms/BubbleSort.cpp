#include "BubbleSort.h"
#include <iostream>
#include "../Functions/Functions.h"

void BubbleSort::Sort(std::vector<int> liste)
{
    uint64_t startTime = Functions::getStartingTime();
    
    int n = liste.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (liste[j] > liste[j + 1]) {
                std::swap(liste[j], liste[j + 1]);
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }

    std::cout << "Bubble Sort finished in: " << Functions::getTimeDifference(startTime) << " ms" << std::endl;
}
