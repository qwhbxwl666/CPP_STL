#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//���������ظ�Ԫ��

void test71()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);

	//���������ظ�Ԫ��
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "�Ҳ�����" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ��Ϊ��" << *it << endl;
	}
}

int main58()
{
	test71();

	return 0;
}