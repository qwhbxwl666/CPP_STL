#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

//ϴ��   ָ����Χ�ڵ�Ԫ�������������

class myPrint3
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test78()
{
	srand((unsigned int)time(NULL));
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), myPrint3());
	cout << endl;

	//����˳��
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint3());
	cout << endl;
}

int main63()
{
	test78();

	return 0;
}