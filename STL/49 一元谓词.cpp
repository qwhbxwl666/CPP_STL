#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* 返回bool类型的仿函数称为谓词
* 如果operator()接受一个参数，那么叫做一元谓词
* 如果operator()接受两个参数，那么叫做二元谓词
*/

//一元谓词
struct GreaterFive
{
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test59()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "没找到" << *it << endl;
	}
	else
	{
		cout << "找到: " << *it << endl;
	}
}

int main49()
{
	test59();

	return 0;
}