#include <iostream>
#include <string>

using namespace std;

/*
* ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
* �������󳬳���ͨ�����ĸ����������������Լ���״̬
* �������������Ϊ��������
*/

//1.����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
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

//2����������������Լ���״̬
class MyPrint1
{
public:
	int count; //�ڲ��Լ���״̬

	MyPrint1()
	{
		count = 0;
	}

	void operator()(string test)
	{
		cout << test << endl;
		count++; //ͳ��ʹ�ô���
	}
};

void test57()
{
	MyPrint1 myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "myPrint���ô���Ϊ�� " << myPrint.count << endl;
}

//3���������������Ϊ��������
void doPrint(MyPrint1& mp, string test)
{
	mp(test);
}

void test58()
{
	MyPrint1 myprint;
	doPrint(myprint, "hello C++");
}

int main48()
{
	test56();
	test57();
	test58();

	return 0;
}