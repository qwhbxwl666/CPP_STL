#include <iostream>
#include <string>

using namespace std;

/*
* `string& insert(int pos, const char* s);  `			//�����ַ���
* `string& insert(int pos, const string& str); `        //�����ַ���
* `string& insert(int pos, int n, char c);`             //��ָ��λ�ò���n���ַ�c
* `string& erase(int pos, int n = npos);`               //ɾ����Pos��ʼ��n���ַ�
*/

//�ַ��������ɾ��
void test13()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;

	str.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
	cout << str << endl;
}

int main10()
{
	test13();

	return 0;
}