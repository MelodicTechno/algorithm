#include "sort/QuickSort.hpp"

namespace sort
{
    template<typename T>
    void QuickSort<T>::sort(std::vector<T>& to_sort)
    {
        if (!to_sort.empty())
        {
            quickSort(to_sort, 0, to_sort.size() - 1);
        }
    }

    template<typename T>
    void QuickSort<T>::quickSort(std::vector<T>& arr, int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    template<typename T>
    int QuickSort<T>::partition(std::vector<T>& arr, int low, int high)
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
}
