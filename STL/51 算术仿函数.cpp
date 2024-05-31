#include <iostream>
#include <functional>

using namespace std;

/*
* template<class T> T plus<T>		  //加法仿函数
* template<class T> T minus<T>        //减法仿函数
* template<class T> T multiplies<T>   //乘法仿函数
* template<class T> T divides<T>      //除法仿函数
* template<class T> T modulus<T>      //取模仿函数
* template<class T> T negate<T>       //取反仿函数
*/

//negate
void test61()
{
	negate<int> n;
	cout << n(50) << endl;
}

//plus
void test62()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}

int main51()
{
	test61();
	test62();

	return 0;
}