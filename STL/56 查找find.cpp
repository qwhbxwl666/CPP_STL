#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
* find				//����Ԫ��
* find_if           //����������Ԫ��
* adjacent_find		//���������ظ�Ԫ��
* binary_search		//���ֲ��ҷ�
* count				//ͳ��Ԫ�ظ���
* count_if          //������ͳ��Ԫ�ظ���
*/

//find ����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()

void test67()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}

	//�����������Ƿ���5���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "û���ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ���" << *it << endl;
	}
}

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

	//����==
	bool operator==(const Person& p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		return false;
	}
};

void test68()
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

	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�������" << it->name << "  ���䣺" << it->age << endl;
	}
}

int main56()
{
	test67();
	test68();

	return 0;
}