#include <iostream>
#include <string>

using namespace std;

//�ַ���ȡ
void test12()
{
	string str = "hello world";

	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//�ַ��޸�
	str[0] = 'x';
	str.at(1) = 'x';
	cout << str << endl;
}


int main9()
{
	test12();

	return 0;
}