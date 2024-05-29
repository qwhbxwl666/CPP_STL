#include <iostream>
#include <map>

using namespace std;

/*
* ���÷º�������ָ��map�������������
* �����Զ����������ͣ�map����Ҫָ���������,ͬset����
*/

class MyCompare2
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test55()
{
	//Ĭ�ϴ�С��������
	//���÷º���ʵ�ִӴ�С����
	map<int, int, MyCompare2> m;

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int, int, MyCompare2>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << it->first << "   value: " << it->second << endl;
	}
}

int main46()
{
	test55();

	return 0;
}