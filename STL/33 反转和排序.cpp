#include <iostream>
#include <list>

using namespace std;

/*
* reverse();	//��ת����
* sort();       //��������
*/

void printList5(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare1(int val1, int val2)
{
	return val1 > val2;
}

//��ת������
void test39()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList5(L);

	//��ת������Ԫ��
	L.reverse();
	printList5(L);

	//����
	L.sort(); //Ĭ�ϵ�������� ��С����
	printList5(L);

	L.sort(myCompare1); //ָ�����򣬴Ӵ�С
	printList5(L);
}

int main33()
{
	test39();

	return 0;
}