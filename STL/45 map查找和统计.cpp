#include <iostream>
#include <map>

using namespace std;

/*
* find(key);			//����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
* count(key);           //ͳ��key��Ԫ�ظ���
*/

//���Һ�ͳ��
void test54()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//����
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "�ҵ���Ԫ�� key = " << (*pos).first << "   value = " << (*pos).second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	size_t num = m.count(3);
	cout << "num = " << num << endl;
}

int main45()
{
	test54();

	return 0;
}