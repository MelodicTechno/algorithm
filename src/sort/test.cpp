#include "sort/QuickSort.hpp"
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words = {"apple", "orange", "banana", "grape", "peach"};
    sort::QuickSort<std::string> sorter;
    sorter.sort(words);

    for (const auto& word : words)
    {
        std::cout << word << " ";
    }
    return 0;
}
