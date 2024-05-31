#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* sort				// 对容器内元素进行排序
* random_shuffle	// 洗牌   指定范围内的元素随机调整次序
* merge				// 容器元素合并，并存储到另一容器中
* reverse			// 反转指定范围的元素
*/

//对容器内元素进行排序

void myPrint2(int val)
{
	cout << val << " ";
}

void test77()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//sort操作从小到大排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint2);
	cout << endl;

	//从大到小排序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint2);
	cout << endl;
}

int main62()
{
	test77();

	return 0;
}