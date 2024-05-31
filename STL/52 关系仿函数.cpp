#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

/*
* template<class T> bool equal_to<T>			//����
* template<class T> bool not_equal_to<T>        //������
* template<class T> bool greater<T>             //����
* template<class T> bool greater_equal<T>       //���ڵ���
* template<class T> bool less<T>                //С��
* template<class T> bool less_equal<T>          //С�ڵ���
*/

class MyCompare4
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test63()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�Լ�ʵ�ַº���
	//sort(v.begin(), v.end(), MyCompare4());
	//STL�ڽ��º��� ���ڷº���
	sort(v.begin(), v.end(), greater<int>());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main52()
{
	test63();

	return 0;
}