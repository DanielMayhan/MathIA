#include <iostream>
#include <vector>

#include "ListGeneration.h"
#include "Functions/Functions.h"
#include "Sorting Algorithms/BubbleSort.h"
#include "Sorting Algorithms/CPPSort.h"
#include "Sorting Algorithms/SelectionSort.h"
#include <thread>

using namespace std;

int main()
{

    
    
    std::list<int> liste = ListGeneration::generateList();
    std::vector<int> vector {std::make_move_iterator(std::begin(liste)), std::make_move_iterator(std::end(liste))};

    uint64_t time = Functions::getStartingTime();
    
    std::thread T_CPPSort(CPPSort::SortList, liste);
    std::thread T_Selection(SelectionSort::Sort, std::ref(vector));
    std::thread T_Bubble(BubbleSort::Sort, std::ref(vector));

    T_CPPSort.join();
    T_Selection.join();
    T_Bubble.join();

    std::cout << "Total execution time: " << Functions::getTimeDifference(time) << "ms" << '\n';
    system("pause");
    return 0;
}