#include <iostream>
#include <deque>

using namespace std;

/*
两端插入操作：
* push_back(elem);			//在容器尾部添加一个数据
* push_front(elem);			//在容器头部插入一个数据
* pop_back();               //删除容器最后一个数据
* pop_front();              //删除容器第一个数据

指定位置操作：
* insert(pos,elem);         //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
* insert(pos,n,elem);		//在pos位置插入n个elem数据，无返回值。
* insert(pos,beg,end);		//在pos位置插入[beg,end)区间的数据，无返回值。
* clear();                  //清空容器的所有数据
* erase(beg,end);           //删除[beg,end)区间的数据，返回下一个数据的位置。
* erase(pos);               //删除pos位置的数据，返回下一个数据的位置。
*/

void printDeque4(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//两端操作
void test26()
{
	deque<int> d;
	//尾插
	d.push_back(10);
	d.push_back(20);
	//头插
	d.push_front(100);
	d.push_front(200);

	printDeque4(d);

	//尾删
	d.pop_back();
	//头删
	d.pop_front();

	printDeque4(d);
}

//插入
void test27()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque4(d);

	d.insert(d.begin(), 1000);
	printDeque4(d);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque4(d);
}

//删除
void test28()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque4(d);

	d.erase(d.begin());
	printDeque4(d);

	d.erase(d.begin(), d.end());
	d.clear();
	printDeque4(d);
}

int main22()
{
	//test26();
	//test27();
	test28();

	return 0;
}