#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//swap交换容器时，注意交换的容器要同种类型

class myPrint9
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test84()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "交换前： " << endl;
	for_each(v1.begin(), v1.end(), myPrint9());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint9());
	cout << endl;

	cout << "交换后： " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint9());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint9());
	cout << endl;
}

int main69()
{
	test84();

	return 0;
}