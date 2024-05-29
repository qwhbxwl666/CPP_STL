#include <iostream>
#include <set>
#include <string>

using namespace std;


//���÷º��������Ըı��������
//�����Զ����������ͣ�set����ָ���������ſ��Բ�������

//ʾ��һ set���������������
class MyCompare1
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test48()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);

	//Ĭ�ϴ�С����
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//ָ���������
	set<int, MyCompare1> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);

	for (set<int, MyCompare1>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//ʾ���� set����Զ�����������
class Person
{
public:
	string name;
	int age;
public:
	Person(string mame, int age)
	{
		this->name = name;
		this->age = age;
	}
};

class comparePerson2
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		//��������������� ����
		return p1.age > p2.age;
	}
};

void test49()
{
	set<Person, comparePerson2> s;

	Person p1("����", 23);
	Person p2("����", 27);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson2>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������ " << it->name << "  ���䣺 " << it->age << endl;
	}
}

int main41()
{
	test48();
	test49();

	return 0;
}