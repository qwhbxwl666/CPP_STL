#include <iostream>
#include <vector>

using namespace std;

//自定义数据类型
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

//存放对象
void test03()
{
	vector<Person> v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "Name: " << (*it).name << "  Age: " << (*it).age << endl;
	}
}

//存放对象指针
void test04()
{
	vector<Person*> v;

	//创建数据
	Person p1("ppp", 9);
	Person p2("ooo", 19);
	Person p3("iii", 29);
	Person p4("uuu", 39);
	Person p5("yyy", 49);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		Person* p = (*it);
		cout << "Name: " << p->name << "  Age: " << (*it)->age << endl;
	}
}


int main()
{
	test03();
	test04();


	return 0;
}