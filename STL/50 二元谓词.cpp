#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//��Ԫν��

class MyCompare3
{
public:
	bool operator()(int num1, int num2)
	{
		return num1 > num2;
	}
};

void test60()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	//Ĭ�ϴ�С����
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "------------------------" << endl;

	//ʹ�ú�������ı��㷨���ԣ�����Ӵ�С
	sort(v.begin(), v.end(), MyCompare3());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main50()
{
	test60();

	return 0;
}