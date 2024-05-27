#include <iostream>
#include <vector>

using namespace std;

/*
empty();  �ж������Ƿ�Ϊ��
capacity();  ����������
size();  ����������Ԫ�صĸ���
resize(int num);  ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
				  ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
resize(int num, elem);  ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
						��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/

void printVector3(vector<int>& v)
{
	for (vector<int>::iterator  it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test17()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector3(v1);
	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������ = " << v1.capacity() << endl;
		cout << "v1�Ĵ�С = " << v1.size() << endl;
	}
	
	//resize ����ָ����С����ָ���ĸ���Ĭ����0�����λ�ã������������ذ汾�滻Ĭ�����
	v1.resize(15, 10);
	printVector3(v1);

	//resize ����ָ����С����ָ���ĸ�С�������Ĳ��ֱ�ɾ��
	v1.resize(5);
	printVector3(v1);
}

int main14()
{
	test17();

	return 0;
}