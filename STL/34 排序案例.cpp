#include <iostream>
#include <list>
#include <string>

using namespace std;

class Person2
{
public:
	string name;
	int age;
	int height;
public:
	Person2(string name, int age, int height)
	{
		this->name = name;
		this->age = age;
		this->height = height;
	}
};

bool comparePerson1(Person2& p1, Person2& p2)
{
	if (p1.age == p2.age)
	{
		return p1.height > p2.height;
	}
	else
	{
		return p1.age < p2.age;
	}
}

void test40()
{
	list<Person2> L;

	Person2 p1("����", 35, 175);
	Person2 p2("�ܲ�", 45, 180);
	Person2 p3("��Ȩ", 40, 170);
	Person2 p4("����", 25, 190);
	Person2 p5("�ŷ�", 35, 160);
	Person2 p6("����", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person2>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������ " << it->name << "  ���䣺 " << it->age << "  ��ߣ� " << it->height << endl;
	}

	cout << "-----------------------------------------" << endl;

	L.sort(comparePerson1);

	for (list<Person2>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������ " << it->name << "  ���䣺 " << it->age << "  ��ߣ� " << it->height << endl;
	}
}

int main34()
{
	test40();

	return 0;
}