#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//swap��������ʱ��ע�⽻��������Ҫͬ������

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

	cout << "����ǰ�� " << endl;
	for_each(v1.begin(), v1.end(), myPrint9());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint9());
	cout << endl;

	cout << "������ " << endl;
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