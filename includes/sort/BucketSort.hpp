#ifndef BUCKET_SORT_HPP
#define BUCKET_SORT_HPP

#include <vector>
#include "sort/Sort.hpp"

namespace myalg
{
    template <typename T>
    class BucketSort : public Sort
    {
    private:
        std::vector<T> test_data;
    public:
        BucketSort(/* args */);
        ~BucketSort();
    };
}

#endif