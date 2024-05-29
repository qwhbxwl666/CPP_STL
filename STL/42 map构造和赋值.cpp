#include <iostream>
#include <map>

using namespace std;

/*
构造：
* map<T1, T2> mp;                 //map默认构造函数
* map(const map &mp);             //拷贝构造函数
赋值：
* map& operator=(const map &mp);  //重载等号操作符
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
	map<int, int> m; //默认构造
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	printMap1(m);

	map<int, int> m2(m); //拷贝构造
	printMap1(m2);

	map<int, int> m3;
	m3 = m2; //赋值
	printMap1(m3);
}

int main42()
{
	test50();

	return 0;
}