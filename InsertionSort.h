#pragma once
#include <vector>
using namespace std;
class InsertionSort
{
private:
	vector<int> test_case{ 1, 2, 5, 6, 3, 0, 9 };
public:
	void sort(vector<int>& nums);
	void test();
	void show_test();
};

