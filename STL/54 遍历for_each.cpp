#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* <algorithm>	������STLͷ�ļ�������һ������Χ�漰���Ƚϡ� ���������ҡ��������������ơ��޸ĵȵ�
* <numeric>		�����С��ֻ��������������������м���ѧ�����ģ�庯��
* <functional>	������һЩģ����,����������������
*/

//for_each	��������

//��ͨ����
void print01(int val)
{
	cout << val << " ";
}

//��������
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test65()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����㷨
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;
}


int main54()
{
	test65();

	return 0;
}