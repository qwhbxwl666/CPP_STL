#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//ͳ��Ԫ�ظ���

//������������
void test73()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count(v.begin(), v.end(), 4);

	cout << "4�ĸ���Ϊ��" << num << endl;
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

	bool operator==(const Person& p)
	{
		if (this->age == p.age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

void test74()
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

	Person p("�����", 35);

	int num = count(v.begin(), v.end(), p);
	cout << "num = " << num << endl;
}

int main60()
{
	test73();
	test74();

	return 0;
}