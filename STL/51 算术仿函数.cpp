#include <iostream>
#include <functional>

using namespace std;

/*
* template<class T> T plus<T>		  //�ӷ��º���
* template<class T> T minus<T>        //�����º���
* template<class T> T multiplies<T>   //�˷��º���
* template<class T> T divides<T>      //�����º���
* template<class T> T modulus<T>      //ȡģ�º���
* template<class T> T negate<T>       //ȡ���º���
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