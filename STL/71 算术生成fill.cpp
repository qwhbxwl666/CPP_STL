# include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

//����fill���Խ�����������Ԫ�����Ϊ ָ����ֵ

class myPrint10
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test86()
{
	vector<int> v;
	v.resize(10);
	//���
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint10());
	cout << endl;
}

int main71()
{
	test86();

	return 0;
}