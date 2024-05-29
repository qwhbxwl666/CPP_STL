#include <iostream>
#include <map>

using namespace std;

/*
���죺
* map<T1, T2> mp;                 //mapĬ�Ϲ��캯��
* map(const map &mp);             //�������캯��
��ֵ��
* map& operator=(const map &mp);  //���صȺŲ�����
*/

void printMap1(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
	cout << endl;
}

void test50()
{
	map<int, int> m; //Ĭ�Ϲ���
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	printMap1(m);

	map<int, int> m2(m); //��������
	printMap1(m2);

	map<int, int> m3;
	m3 = m2; //��ֵ
	printMap1(m3);
}

int main42()
{
	test50();

	return 0;
}