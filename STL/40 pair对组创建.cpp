#include <iostream>
#include <string>

using namespace std;

//�ɶԳ��ֵ����ݣ����ö�����Է�����������
/*
* pair<type, type> p ( value1, value2 );
* pair<type, type> p = make_pair( value1, value2 );
*/

//���鴴��
void test47()
{
	pair<string, int> p(string("Tom"), 20);
	cout << "������ " << p.first << "   ���䣺 " << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "������ " << p.first << "   ���䣺 " << p.second << endl;
}

int main40()
{
	test47();

	return 0;
}