#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//将容器内指定范围的旧元素修改为新元素

class myPrint7
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test82()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint7());
	cout << endl;

	//将容器中的20 替换成 2000
	cout << "替换后：" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint7());
	cout << endl;
}

int main67()
{
	test82();

	return 0;
}