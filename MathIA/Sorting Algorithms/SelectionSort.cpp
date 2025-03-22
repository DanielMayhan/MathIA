#include "SelectionSort.h"

#include <iostream>

#include "../Functions/Functions.h"

void SelectionSort::Sort(std::vector<int>& liste)
{

    uint64_t startTime = Functions::getStartingTime();
    
    int n = liste.size();

    for (int i = 0; i < n - 1; ++i) {

        // Assume the current position holds
        // the minimum element
        int min_idx = i;

        // Iterate through the unsorted portion
        // to find the actual minimum
        for (int j = i + 1; j < n; ++j) {
            if (liste[j] < liste[min_idx]) {

                // Update min_idx if a smaller
                // element is found
                min_idx = j; 
            }
        }

        // Move minimum element to its
        // correct position
        std::swap(liste[i], liste[min_idx]);
    }
    
    std::cout << "Selection Sort finished in: " << Functions::getTimeDifference(startTime) << " ms" << std::endl;
}
