#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* copy			// ������ָ����Χ��Ԫ�ؿ�������һ������
* replace       // ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
* replace_if    // ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
* swap          // ��������������Ԫ��
*/

//������ָ����Χ��Ԫ�ؿ�������һ������

class myPrint6
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test81()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}
	vector<int> v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint6());
	cout << endl;
}

int main66()
{
	test81();

	return 0;
}