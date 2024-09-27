#include "InsertionSort.h"
#include <iostream>
void InsertionSort::sort(vector<int>& nums)
{
	int n = nums.size();
	for (int i = 1; i < n; i++)
	{
		int key = nums[i];
		int j = i - 1;
		while (j >= 0 && nums[j] > key) {
			nums[j + 1] = nums[j];
			j--;
		}
		if (j < n)
		{
			nums[j + 1] = key;
		}
	}
}
void InsertionSort::test()
{
	sort(this->test_case);
	show_test();
}
void InsertionSort::show_test()
{
	for (int i = 0; i < this->test_case.size(); i++)
	{
		std::cout << this->test_case[i] << ' ';
	}
}