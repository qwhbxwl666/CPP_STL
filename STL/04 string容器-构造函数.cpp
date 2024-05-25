#include <iostream>
#include <string>

using namespace std;

/*
* `string();`          				//����һ���յ��ַ��� ����: string str;
* `string(const char* s);`	        //ʹ���ַ���s��ʼ��
* `string(const string& str);`		//ʹ��һ��string�����ʼ����һ��string����
* `string(int n, char c);`          //ʹ��n���ַ�c��ʼ��
*/

//string����
void test06()
{
	string s1; //�������ַ����������޲ι��캯��
	cout << "s1 = " << s1 << endl;

	const char* str = "hello world";
	string s2(str); //��c_stringת������string
	cout << "s2 = " << s2 << endl;

	string s3(s2); //���ÿ������캯��
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}


int main4()
{
	test06();


	return 0;
}