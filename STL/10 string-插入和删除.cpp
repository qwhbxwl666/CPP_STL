#include <iostream>
#include <string>

using namespace std;

/*
* `string& insert(int pos, const char* s);  `			//插入字符串
* `string& insert(int pos, const string& str); `        //插入字符串
* `string& insert(int pos, int n, char c);`             //在指定位置插入n个字符c
* `string& erase(int pos, int n = npos);`               //删除从Pos开始的n个字符
*/

//字符串插入和删除
void test13()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;

	str.erase(1, 3);  //从1号位置开始3个字符
	cout << str << endl;
}

int main10()
{
	test13();

	return 0;
}