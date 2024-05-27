#include <iostream>
#include <deque>

using namespace std;

/*
* deque.empty();                //�ж������Ƿ�Ϊ��
* deque.size();                 //����������Ԫ�صĸ���
* deque.resize(num);			//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
* deque.resize(num, elem);		//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
*/

//dequeû�������ĸ���

void printDeque3(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��С����
void test25()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque3(d1);

	//�ж������Ƿ�Ϊ��
	if (d1.empty())
	{
		cout << "d1Ϊ�գ�" << endl;
	}
	else
	{
		cout << "d1��Ϊ�գ�" << endl;
		//ͳ�ƴ�С
		cout << "d1�Ĵ�СΪ�� " << d1.size() << endl;
	}

	//����ָ����С
	d1.resize(15, 1);
	printDeque3(d1);

	d1.resize(5);
	printDeque3(d1);
}

int main21()
{
	test25();

	return 0;
}