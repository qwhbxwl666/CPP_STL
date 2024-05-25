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
	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ����ݵ�����
	vector<int> v;
	//�������з�����
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
	//v.begin() ���ص�������ָ�������ĵ�һ��Ԫ�ص�λ��
	//v.end() ���ص�������ָ�����һ��Ԫ�ص���һ��λ��
	//vector<int>::iterator���õ�vector<int>���������ĵ���������

	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();

	//��һ�ֱ�����ʽ
	while (itBegin != itEnd)
	{
		cout << *itBegin << " ";
		itBegin++;
	}
	cout << endl;

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�����ֱ�����ʽ
	//ʹ��STL�ṩ��׼�㷨 ͷ�ļ�algorithm
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//�ڶ��ּ򻯷�ʽ
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