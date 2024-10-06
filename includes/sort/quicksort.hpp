#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include "sort/Sort.hpp"
#include <vector>
#include <algorithm>  // for std::swap

namespace sort
{
    template<typename T>
    class QuickSort : public Sort<T>
    {
    public:
        QuickSort() = default;
        ~QuickSort() = default;

        // Override the sort method in the header itself
        void sort(std::vector<T>& to_sort) override
        {
            if (!to_sort.empty())
            {
                quickSort(to_sort, 0, to_sort.size() - 1);
            }
        }

    private:
        void quickSort(std::vector<T>& arr, int low, int high)
        {
            if (low < high)
            {
                int pi = partition(arr, low, high);
                quickSort(arr, low, pi - 1);
                quickSort(arr, pi + 1, high);
            }
        }

        int partition(std::vector<T>& arr, int low, int high)
        {
            T pivot = arr[high];
            int i = (low - 1);
            for (int j = low; j < high; j++)
            {
                if (arr[j] < pivot)
                {
                    i++;
                    std::swap(arr[i], arr[j]);
                }
            }
            std::swap(arr[i + 1], arr[high]);
            return (i + 1);
        }
    };
}

#endif // QUICKSORT_HPP
