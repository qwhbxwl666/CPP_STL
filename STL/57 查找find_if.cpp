#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//������������
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test69()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "û���ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ�����5�����֣�" << *it << endl;
	}
}

//�Զ�����������
class Person
{
public:
	string name;
	int age;

public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
};

class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.age > 20;
	}
};

void test70()
{
	vector<Person> v;

	//��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
	if (it == v.end())
	{
		cout << "û���ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ����֣�" << it->name << "   ���䣺" << it->age << endl;
	}
}

int main57()
{
	test69();
	test70();

	return 0;
}