#include <iostream>
#include <set>

using namespace std;

/*
* set和multiset区别：
* set不允许容器中有重复的元素
* multiset允许容器中有重复的元素
* 
* 构造：
* set<T> st;						//默认构造函数：
* set(const set &st);				//拷贝构造函数
* 赋值：
* set& operator=(const set &st);	//重载等号操作符
*/

void printSet1(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//构造和赋值
void test41()
{
	set<int> s1;

	s1.insert(50);
	s1.insert(20);
	s1.insert(70);
	s1.insert(10);
	printSet1(s1);

	//拷贝构造
	set<int> s2(s1);
	printSet1(s2);

	//赋值
	set<int> s3;
	s3 = s2;
	printSet1(s3);
}

int main35()
{
	test41();

	return 0;
}