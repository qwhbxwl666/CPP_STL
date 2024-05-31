#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//搬运容器到另一个容器中

class Transform
{
public:
	int operator()(int val)
	{
		return val;
	}
};

class MyPrint2
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test66()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget;

	vTarget.resize(v.size());

	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint2());
}

int main55()
{
	test66();

	return 0;
}