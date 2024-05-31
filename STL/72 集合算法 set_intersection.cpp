#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* 两个集合必须是有序序列
* set_intersection		// 求两个容器的交集
* set_union             // 求两个容器的并集
* set_difference        // 求两个容器的差集
*/

//交集
class myPrint11
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test87()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;
	//取两个里面较小的值给目标容器开辟空间
	vTarget.resize(min(v1.size(), v2.size()));

	//返回目标容器的最后一个元素的迭代器地址
	vector<int>::iterator itEnd =
		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint11());
	cout << endl;
}

int main72()
{
	test87();

	return 0;
}