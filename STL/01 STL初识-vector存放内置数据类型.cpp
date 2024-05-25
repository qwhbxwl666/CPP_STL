#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	//创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
	vector<int> v;
	//向容器中放数据
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
	//v.begin() 返回迭代器，指向容器的第一个元素的位置
	//v.end() 返回迭代器，指向最后一个元素的下一个位置
	//vector<int>::iterator，拿到vector<int>这种容器的迭代器类型

	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();

	//第一种遍历方式
	while (itBegin != itEnd)
	{
		cout << *itBegin << " ";
		itBegin++;
	}
	cout << endl;

	//第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//第三种遍历方式
	//使用STL提供标准算法 头文件algorithm
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//第二种简化方式
	for (int val : v) {
		cout << val << " ";
	}
	cout << endl;
}

int main()
{
	test01();

	return 0;
}