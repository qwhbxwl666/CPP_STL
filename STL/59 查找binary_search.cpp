#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//binary_search 二分查找（有序） 返回bool

void test72()
{
	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//二分查找
	bool ret = binary_search(v.begin(), v.end(), 2);
	if (ret)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

int main59()
{
	test72();

	return 0;
}