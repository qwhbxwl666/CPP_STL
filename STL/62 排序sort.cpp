#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* sort				// ��������Ԫ�ؽ�������
* random_shuffle	// ϴ��   ָ����Χ�ڵ�Ԫ�������������
* merge				// ����Ԫ�غϲ������洢����һ������
* reverse			// ��תָ����Χ��Ԫ��
*/

//��������Ԫ�ؽ�������

void myPrint2(int val)
{
	cout << val << " ";
}

void test77()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//sort������С��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint2);
	cout << endl;

	//�Ӵ�С����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint2);
	cout << endl;
}

int main62()
{
	test77();

	return 0;
}