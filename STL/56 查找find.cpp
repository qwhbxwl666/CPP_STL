#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
* find				//查找元素
* find_if           //按条件查找元素
* adjacent_find		//查找相邻重复元素
* binary_search		//二分查找法
* count				//统计元素个数
* count_if          //按条件统计元素个数
*/

//find 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()

void test67()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}

	//查找容器中是否有5这个元素
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没有找到！" << endl;
	}
	else
	{
		cout << "找到：" << *it << endl;
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

	//重载==
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

	//创建数据
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
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到姓名：" << it->name << "  年龄：" << it->age << endl;
	}
}

int main56()
{
	test67();
	test68();

	return 0;
}