#ifndef SUB_MAT_ADD_HPP
#define SUB_MAT_ADD_HPP

#include <vector>

namespace hw
{
    class SubMatAdd
    {
    private:
        std::vector<std::vector<int>> testMat;
        std::vector<int> dp;
        int maxValue;
        int top;
        int bottom;
        int left;
        int right;
    public:
        SubMatAdd();
        SubMatAdd(std::vector<std::vector<int>> mat);
        int solve();
        void printMaxSubmatrix();
    };
}

#endif