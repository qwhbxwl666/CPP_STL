#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* ����bool���͵ķº�����Ϊν��
* ���operator()����һ����������ô����һԪν��
* ���operator()����������������ô������Ԫν��
*/

//һԪν��
struct GreaterFive
{
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test59()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "û�ҵ�" << *it << endl;
	}
	else
	{
		cout << "�ҵ�: " << *it << endl;
	}
}

int main49()
{
	test59();

	return 0;
}