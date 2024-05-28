#include <iostream>
#include <set>

using namespace std;

/*
* set��multiset����
* set���������������ظ���Ԫ��
* multiset�������������ظ���Ԫ��
* 
* ���죺
* set<T> st;						//Ĭ�Ϲ��캯����
* set(const set &st);				//�������캯��
* ��ֵ��
* set& operator=(const set &st);	//���صȺŲ�����
*/

void printSet1(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//����͸�ֵ
void test41()
{
	set<int> s1;

	s1.insert(50);
	s1.insert(20);
	s1.insert(70);
	s1.insert(10);
	printSet1(s1);

	//��������
	set<int> s2(s1);
	printSet1(s2);

	//��ֵ
	set<int> s3;
	s3 = s2;
	printSet1(s3);
}

int main35()
{
	test41();

	return 0;
}