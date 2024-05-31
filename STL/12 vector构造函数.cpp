#include <iostream>
#include <vector>

using namespace std;

/*
* vector<T> v;               	//采用模板实现类实现，默认构造函数
* vector(v.begin(), v.end());	//将v[begin(), end())区间中的元素拷贝给本身
* vector(n, elem);				//构造函数将n个elem拷贝给本身
* vector(const vector &vec);	//拷贝构造函数
*/

void printVector1(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test15()
{
	vector<int> v1; //无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector1(v1);

	vector<int> v2(v1.begin(), v1.end());
	printVector1(v2);

	vector<int> v3(10, 100);
	printVector1(v3);

	vector<int> v4(v3);
	printVector1(v4);
}

int main12()
{
	test15();

	return 0;
}