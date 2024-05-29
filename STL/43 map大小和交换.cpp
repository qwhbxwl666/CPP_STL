#include <iostream>
#include <map>

using namespace std;

/*
* size();        //����������Ԫ�ص���Ŀ
* empty();       //�ж������Ƿ�Ϊ��
* swap(st);      //����������������
*/

void printMap2(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
	cout << endl;
}

void test51()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	if (m.empty())
	{
		cout << "mΪ��" << endl;
	}
	else
	{
		cout << "m��Ϊ��" << endl;
		cout << "m�Ĵ�СΪ�� " << m.size() << endl;
	}
}

//����
void test52()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "����ǰ" << endl;
	printMap2(m);
	printMap2(m2);

	cout << "������" << endl;
	m.swap(m2);
	printMap2(m);
	printMap2(m2);
}

int main43()
{
	test51();
	test52();

	return 0;
}