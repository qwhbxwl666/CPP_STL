#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/*
* ���������㷨
* accumulate	// ��������Ԫ���ۼ��ܺ�
* fill          // �����������Ԫ��
*/

//���������� ����Ԫ���ۼ��ܺ�

void test85()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0);

	cout << "total = " << total << endl;
}

int main70()
{
	test85();

	return 0;
}