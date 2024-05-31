#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//二元谓词

class MyCompare3
{
public:
	bool operator()(int num1, int num2)
	{
		return num1 > num2;
	}
};

void test60()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	//默认从小到大
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "------------------------" << endl;

	//使用函数对象改变算法策略，排序从大到小
	sort(v.begin(), v.end(), MyCompare3());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main50()
{
	test60();

	return 0;
}