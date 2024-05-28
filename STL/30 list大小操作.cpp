#include <iostream>
#include <list>

using namespace std;

/*
size(); ����������Ԫ�صĸ���
empty(); �ж������Ƿ�Ϊ��
resize(num); ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
			 ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(num, elem); ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
				   ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
*/

void printList3(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��С����
void test36()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1�Ĵ�СΪ�� " << L1.size() << endl;
	}

	//����ָ����С
	L1.resize(10);
	printList3(L1);

	L1.resize(2);
	printList3(L1);
}

int main30()
{
	test36();

	return 0;
}