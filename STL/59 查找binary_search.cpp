#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//binary_search ���ֲ��ң����� ����bool

void test72()
{
	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//���ֲ���
	bool ret = binary_search(v.begin(), v.end(), 2);
	if (ret)
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

int main59()
{
	test72();

	return 0;
}