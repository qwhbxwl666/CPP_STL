#include <iostream>
#include <list>

using namespace std;

/*
* reverse();	//反转链表
* sort();       //链表排序
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

//反转和排序
void test39()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList5(L);

	//反转容器的元素
	L.reverse();
	printList5(L);

	//排序
	L.sort(); //默认的排序规则 从小到大
	printList5(L);

	L.sort(myCompare1); //指定规则，从大到小
	printList5(L);
}

int main33()
{
	test39();

	return 0;
}