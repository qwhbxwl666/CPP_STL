#include <iostream>
#include <set>

using namespace std;

/*
* size();			//����������Ԫ�ص���Ŀ
* empty();			//�ж������Ƿ�Ϊ��
* swap(st);			//����������������
*/

void printSet2(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��С
void test42()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;
	}
}

//����
void test43()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	set<int> s2;
	
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);

	cout << "����ǰ�� " << endl;
	printSet2(s1);
	printSet2(s2);
	cout << endl;

	cout << "������ " << endl;
	s1.swap(s2);
	printSet2(s1);
	printSet2(s2);
}

int main36()
{
	test42();
	test43();

	return 0;
}