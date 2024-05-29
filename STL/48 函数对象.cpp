#include <iostream>
#include <string>

using namespace std;

/*
* 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
* 函数对象超出普通函数的概念，函数对象可以有自己的状态
* 函数对象可以作为参数传递
*/

//1.函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test56()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

//2、函数对象可以有自己的状态
class MyPrint
{
public:
	int count; //内部自己的状态

	MyPrint()
	{
		count = 0;
	}

	void operator()(string test)
	{
		cout << test << endl;
		count++; //统计使用次数
	}
};

void test57()
{
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "myPrint调用次数为： " << myPrint.count << endl;
}

//3、函数对象可以作为参数传递
void doPrint(MyPrint& mp, string test)
{
	mp(test);
}

void test58()
{
	MyPrint myprint;
	doPrint(myprint, "hello C++");
}

int main48()
{
	test56();
	test57();
	test58();

	return 0;
}