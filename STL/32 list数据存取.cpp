#include <iostream>
#include <list>

using namespace std;

/*
* front();    //���ص�һ��Ԫ�ء�
* back();     //�������һ��Ԫ�ء�
*/

//���ݴ�ȡ
void test38()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//cout << L1.at(0) << endl;	//���� ��֧��at��������
	//cout << L1[0] << endl;	//���� ��֧��[]��ʽ��������
	cout << "��һ��Ԫ��Ϊ�� " << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ�� " << L1.back() << endl;

	//list�����ĵ�����ʱ˫�����������֧���������
	list<int>::iterator it = L1.begin();
	//it = it + 1;  //���󣬲�������Ծ���ʣ���ʹ��+1��it++����
}

int main32()
{
	test38();

	return 0;
}