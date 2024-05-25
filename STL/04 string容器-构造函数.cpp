#include <iostream>
#include <string>

using namespace std;

/*
* `string();`          				//创建一个空的字符串 例如: string str;
* `string(const char* s);`	        //使用字符串s初始化
* `string(const string& str);`		//使用一个string对象初始化另一个string对象
* `string(int n, char c);`          //使用n个字符c初始化
*/

//string构造
void test06()
{
	string s1; //创建空字符串，调用无参构造函数
	cout << "s1 = " << s1 << endl;

	const char* str = "hello world";
	string s2(str); //把c_string转换成了string
	cout << "s2 = " << s2 << endl;

	string s3(s2); //调用拷贝构造函数
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}


int main4()
{
	test06();


	return 0;
}