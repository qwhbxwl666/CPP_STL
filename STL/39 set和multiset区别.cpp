#include <iostream>
#include <set>

using namespace std;

/*
* set�����Բ����ظ����ݣ���multiset����
* set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
* multiset���������ݣ���˿��Բ����ظ�����
*/

//set��multiset����
void test46()
{
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�!" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ�ܣ�" << endl;
	}

	ret = s.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ���" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ�ܣ�" << endl;
	}

	//multiset
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);

	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main39()
{
	test46();

	return 0;
}