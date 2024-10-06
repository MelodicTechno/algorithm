#include <vector>

namespace sort
{
    template <typename T>
    class Sort
    {
    private:
        /* data */
        std::vector<T> testcase;
        std::vector<T> data;

    public:
        // Default constructor
        Sort() = default;

        // Destructor
        ~Sort() = default;
        virtual void sort(std::vector<T>& to_sort) = 0;
    };
}
