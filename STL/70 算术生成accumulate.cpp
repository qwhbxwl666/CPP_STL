#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/*
* 算术生成算法
* accumulate	// 计算容器元素累计总和
* fill          // 向容器中添加元素
*/

//计算区间内 容器元素累计总和

void test85()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0);

	cout << "total = " << total << endl;
}

int main70()
{
	test85();

	return 0;
}