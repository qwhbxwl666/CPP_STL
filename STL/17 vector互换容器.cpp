#include <iostream>
#include <vector>

using namespace std;

/*
swap(vec);		// ��vec�뱾���Ԫ�ػ���
*/

void printVector5(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test20()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector5(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector5(v2);

	//��������
	cout << "������ " << endl;
	v1.swap(v2);
	printVector5(v1);
	printVector5(v2);
}

void test21()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v�������� " << v.capacity() << endl;
	cout << "v�Ĵ�С�� " << v.size() << endl;

	v.resize(3);

	cout << "v�������� " << v.capacity() << endl;
	cout << "v�Ĵ�С�� " << v.size() << endl;
	
	//�����ڴ�
	vector<int>(v).swap(v); //��������

	cout << "v�������� " << v.capacity() << endl;
	cout << "v�Ĵ�С�� " << v.size() << endl;
}

int main17()
{
	test20();
	test21();

	return 0;
}