#include <iostream>
#include <list>

using namespace std;

/*
* assign(beg, end);					//��[beg, end)�����е����ݿ�����ֵ������
* assign(n, elem);					//��n��elem������ֵ������
* list& operator=(const list &lst); //���صȺŲ�����
* swap(lst);                        //��lst�뱾���Ԫ�ػ�����
*/

void printList2(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��ֵ�ͽ���
void test34()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList2(L1);

	//��ֵ
	list<int> L2;
	L2 = L1;
	printList2(L2);

	list<int> L3;
	L3.assign(L2.begin(), L2.end());
	printList2(L3);

	list<int> L4;
	L4.assign(10, 100);
	printList2(L4);
}

//����
void test35()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int> L2;
	L2.assign(10, 100);

	cout << "����ǰ�� " << endl;
	printList2(L1);
	printList2(L2);

	cout << endl;

	L1.swap(L2);

	cout << "������ " << endl;
	printList2(L1);
	printList2(L2);
}

int main29()
{
	test34();
	test35();
	
	return 0;
}