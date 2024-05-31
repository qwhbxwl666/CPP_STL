#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//将容器内元素进行反转

class myPrint5
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test80()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反转前：" << endl;
	for_each(v.begin(), v.end(), myPrint5());
	cout << endl;

	cout << "反转后：" << endl;

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint5());
	cout << endl;
}

int main65()
{
	test80();

	return 0;
}