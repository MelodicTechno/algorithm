#include "DifferArray.hpp"
#include <iostream>
vector<int> DifferArray::getdiff()
{
	vector<int> res;
	vector<int> test_case = this->test_case;
	res.push_back(test_case[0]);
	int n = test_case.size();
	for (int i = 1; i < n; ++i)
	{
		res.push_back(test_case[i] - test_case[i - 1]);
	}
	res.push_back(test_case[n - 1]);
	return res;
}

void DifferArray::showcase()
{
	vector<int> toprint = this->getdiff();
	for (int i = 0; i < toprint.size(); ++i)
	{
		std::cout << toprint[i] << ' ';
	}
}