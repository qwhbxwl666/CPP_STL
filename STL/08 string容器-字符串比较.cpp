#include <iostream>
#include <string>

using namespace std;

//�ַ����Ƚ�
void test11()
{

	string s1 = "hello";
	string s2 = "hello";

	int ret = s1.compare(s2);

	if (ret == 0) {
		cout << "s1 ���� s2" << endl;
	}
	else if (ret > 0)
	{
		cout << "s1 ���� s2" << endl;
	}
	else
	{
		cout << "s1 С�� s2" << endl;
	}

}


int main8()
{
	test11();

	return 0;
}