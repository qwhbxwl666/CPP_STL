#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* <algorithm>	是所有STL头文件中最大的一个，范围涉及到比较、 交换、查找、遍历操作、复制、修改等等
* <numeric>		体积很小，只包括几个在序列上面进行简单数学运算的模板函数
* <functional>	定义了一些模板类,用以声明函数对象。
*/

//for_each	遍历容器

//普通函数
void print01(int val)
{
	cout << val << " ";
}

//函数对象
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test65()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//遍历算法
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;
}


int main54()
{
	test65();

	return 0;
}