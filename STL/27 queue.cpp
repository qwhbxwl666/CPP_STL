#include <iostream>
#include <queue>
#include <string>

using namespace std;

//队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为

/*
构造函数：
- queue<T> que;                         //queue采用模板类实现，queue对象的默认构造形式
- queue(const queue &que);				//拷贝构造函数

赋值操作：
- queue& operator=(const queue &que);   //重载等号操作符

数据存取：
- push(elem);                           //往队尾添加元素
- pop();                                //从队头移除第一个元素
- back();                               //返回最后一个元素
- front();                              //返回第一个元素

大小操作：
- empty();								//判断堆栈是否为空
- size();								//返回栈的大小
*/

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

void test32()
{
	//创建队列
	queue<Person> q;

	//准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 900);
	Person p4("沙僧", 800);

	//向队列中添加元素，入队操作
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//队列不提供迭代器，更不支持随机访问
	while (!q.empty())
	{
		//输出队头元素
		cout << "队头元素--姓名： " << q.front().name << "   年龄： " << q.front().age << endl;

		cout << "队尾元素--姓名： " << q.back().name << "   年龄： " << q.back().age << endl;

		cout << endl;
		//弹出队头元素
		q.pop();
	}

	cout << "队列大小为： " << q.size() << endl;
}

int main27()
{
	test32();

	return 0;
}