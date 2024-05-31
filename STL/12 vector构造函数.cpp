#include <iostream>
#include <vector>

using namespace std;

/*
* vector<T> v;               	//����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
* vector(v.begin(), v.end());	//��v[begin(), end())�����е�Ԫ�ؿ���������
* vector(n, elem);				//���캯����n��elem����������
* vector(const vector &vec);	//�������캯��
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
	vector<int> v1; //�޲ι���
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