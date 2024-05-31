#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* �������ϱ�������������
* set_intersection		// �����������Ľ���
* set_union             // �����������Ĳ���
* set_difference        // �����������Ĳ
*/

//����
class myPrint11
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test87()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;
	//ȡ���������С��ֵ��Ŀ���������ٿռ�
	vTarget.resize(min(v1.size(), v2.size()));

	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
	vector<int>::iterator itEnd =
		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint11());
	cout << endl;
}

int main72()
{
	test87();

	return 0;
}