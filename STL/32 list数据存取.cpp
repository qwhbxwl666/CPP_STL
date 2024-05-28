#include <iostream>
#include <list>

using namespace std;

/*
* front();    //返回第一个元素。
* back();     //返回最后一个元素。
*/

//数据存取
void test38()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//cout << L1.at(0) << endl;	//错误 不支持at访问数据
	//cout << L1[0] << endl;	//错误 不支持[]方式访问数据
	cout << "第一个元素为： " << L1.front() << endl;
	cout << "最后一个元素为： " << L1.back() << endl;

	//list容器的迭代器时双向迭代器，不支持随机访问
	list<int>::iterator it = L1.begin();
	//it = it + 1;  //错误，不可以跳跃访问，即使是+1，it++可以
}

int main32()
{
	test38();

	return 0;
}