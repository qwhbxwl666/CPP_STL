//06 string���� - �ַ���ƴ��
#include <iostream>
#include <string>

using namespace std;

/*
* string& operator+=(const char* str);						//����+=������
* string& operator+=(const char c);							//����+=������
* string& operator+=(const string& str);					//����+=������
* string& append(const char *s);                            //���ַ���s���ӵ���ǰ�ַ�����β
* string& append(const char *s, int n);						//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
* string& append(const string &s);							//ͬoperator+=(const string& str)
* string& append(const string &s, int pos, int n);			//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/

//string �ַ���ƴ��
void test08()
{
	string str1 = "��";
	str1 += "������Ϸ";
	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append("love");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 4, 3); //���±�4λ�ÿ�ʼ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
	cout << "str3 = " << str3 << endl;

}

int main6()
{
	test08();

	return 0;
}