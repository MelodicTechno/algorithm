#ifndef BEANS_HPP
#define BEANS_HPP

/*
    given a bowl A of n beans, put beans to bowl B, each time, 1, 2, or 3 beans are allowed to take, show the ways to move the beans
    input: int n
    output: the ways
*/

namespace hw
{
    class Beans
    {
    private:
        // test cases of n
        int caseN;

    public:
        Beans(int n);
        // using memoization methods
        int memo(int n);
        int helper(int n);
        // in an iterate way
        int rec(int n);
        // run the two methods
        void show();
    };
}

#endif
