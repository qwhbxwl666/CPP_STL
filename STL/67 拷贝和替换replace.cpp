#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��

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

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint7());
	cout << endl;

	//�������е�20 �滻�� 2000
	cout << "�滻��" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint7());
	cout << endl;
}

int main67()
{
	test82();

	return 0;
}