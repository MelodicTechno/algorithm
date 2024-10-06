#include "sort/Sort.hpp"

namespace sort
{
    template<typename T>
    class QuickSort : public Sort<T>
    {
    public:
        QuickSort() = default;
        ~QuickSort() = default;

        // Override the sort method
        void sort(std::vector<T>& to_sort) override;
    
    private:
        void quickSort(std::vector<T>& arr, int low, int high);
        int partition(std::vector<T>& arr, int low, int high);
    };
}
