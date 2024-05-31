# include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

//利用fill可以将容器区间内元素填充为 指定的值

class myPrint10
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test86()
{
	vector<int> v;
	v.resize(10);
	//填充
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint10());
	cout << endl;
}

int main71()
{
	test86();

	return 0;
}