#include <iostream>
#include <deque>

using namespace std;

/*
���˲��������
* push_back(elem);			//������β�����һ������
* push_front(elem);			//������ͷ������һ������
* pop_back();               //ɾ���������һ������
* pop_front();              //ɾ��������һ������

ָ��λ�ò�����
* insert(pos,elem);         //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
* insert(pos,n,elem);		//��posλ�ò���n��elem���ݣ��޷���ֵ��
* insert(pos,beg,end);		//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
* clear();                  //�����������������
* erase(beg,end);           //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
* erase(pos);               //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
*/

void printDeque4(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//���˲���
void test26()
{
	deque<int> d;
	//β��
	d.push_back(10);
	d.push_back(20);
	//ͷ��
	d.push_front(100);
	d.push_front(200);

	printDeque4(d);

	//βɾ
	d.pop_back();
	//ͷɾ
	d.pop_front();

	printDeque4(d);
}

//����
void test27()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque4(d);

	d.insert(d.begin(), 1000);
	printDeque4(d);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque4(d);
}

//ɾ��
void test28()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque4(d);

	d.erase(d.begin());
	printDeque4(d);

	d.erase(d.begin(), d.end());
	d.clear();
	printDeque4(d);
}

int main22()
{
	//test26();
	//test27();
	test28();

	return 0;
}