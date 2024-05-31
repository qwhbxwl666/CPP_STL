#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//������ͳ��Ԫ�ظ���

//������������
class Greater4
{
public:
	bool operator()(int val)
	{
		return val > 4;
	}
};

void test75()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count_if(v.begin(), v.end(), Greater4());

	cout << "����4�ĸ���Ϊ��" << num << endl;
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

class AgeLess35
{
public:
	bool operator()(const Person& p)
	{
		return p.age < 35;
	}
};

void test76()
{
	vector<Person> v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeLess35());

	cout << "С��35��ĸ�����" << num << endl;
}

int main61()
{
	test75();
	test76();

	return 0;
}