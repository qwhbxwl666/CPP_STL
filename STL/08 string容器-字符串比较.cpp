#include <iostream>
#include <string>

using namespace std;

//字符串比较
void test11()
{

	string s1 = "hello";
	string s2 = "hello";

	int ret = s1.compare(s2);

	if (ret == 0) {
		cout << "s1 等于 s2" << endl;
	}
	else if (ret > 0)
	{
		cout << "s1 大于 s2" << endl;
	}
	else
	{
		cout << "s1 小于 s2" << endl;
	}

}


int main8()
{
	test11();

	return 0;
}