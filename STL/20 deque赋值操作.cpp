#include <iostream>
#include <deque>

using namespace std;

/*
* deque& operator=(const deque &deq);        //重载等号操作符
* assign(beg, end);                          //将[beg, end)区间中的数据拷贝赋值给本身。
* assign(n, elem);                           //将n个elem拷贝赋值给本身。
*/

void printDeque2(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//赋值操作
void test24()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque2(d1);

	deque<int> d2;
	d2 = d1;
	printDeque2(d2);

	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque2(d3);

	deque<int> d4;
	d4.assign(10, 100);
	printDeque2(d4);
}

int main20()
{
	test24();

	return 0;
}