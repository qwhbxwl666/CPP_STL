#include <iostream>
#include <vector>

using namespace std;

/*
* `push_back(ele);`									// β������Ԫ��ele
* `pop_back();`                                     // ɾ�����һ��Ԫ��
* `insert(const_iterator pos, ele);`				// ������ָ��λ��pos����Ԫ��ele
* `insert(const_iterator pos, int count, ele);`		// ������ָ��λ��pos����count��Ԫ��ele
* `erase(const_iterator pos);`						// ɾ��������ָ���Ԫ��
* `erase(const_iterator start, const_iterator end);`// ɾ����������start��end֮���Ԫ��
* `clear();`                                        // ɾ������������Ԫ��
*/

void printVector4(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//�����ɾ��
void test18()
{
	vector<int> v1;
	//β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector4(v1);

	//βɾ
	v1.pop_back();
	printVector4(v1);

	//����
	v1.insert(v1.begin(), 100);
	printVector4(v1);

	v1.insert(v1.begin(), 2, 1000);
	printVector4(v1);

	//ɾ��
	v1.erase(v1.begin());
	printVector4(v1);

	//���
	v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector4(v1);
}

int main15()
{
	test18();

	return 0;
}