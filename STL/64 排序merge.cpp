#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//两个容器元素合并，并存储到另一容器中 两个容器必须是有序的

class myPrint4
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test79()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int> vtarget;
	//目标容器需要提前开辟空间
	vtarget.resize(v1.size() + v2.size());
	//合并 需要两个有序序列
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), vtarget.end(), myPrint4());
	cout << endl;
}

int main64()
{
	test79();

	return 0;
}