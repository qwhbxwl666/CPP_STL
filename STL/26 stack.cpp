#include <iostream>
#include <stack>

using namespace std;

//ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ

/*
���캯����
* stack<T> stk;                                 //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
* stack(const stack &stk);						//�������캯��

��ֵ������
* stack& operator=(const stack &stk);           //���صȺŲ�����

���ݴ�ȡ��
* push(elem);									//��ջ�����Ԫ��
* pop();										//��ջ���Ƴ���һ��Ԫ��
* top();										//����ջ��Ԫ��

��С������
* empty();										//�ж϶�ջ�Ƿ�Ϊ��
* size();										//����ջ�Ĵ�С
*/

//ջ�������ýӿ�
void test31()
{
	//����ջ������ջ������������Ƚ����
	stack<int> s;

	//��ջ�����Ԫ�أ�����ѹջ����ջ
	s.push(10);
	s.push(20);
	s.push(30);

	while (!s.empty())
	{
		//���ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
		//����ջ��Ԫ��
		s.pop();
	}
	cout << "ջ�Ĵ�СΪ�� " << s.size() << endl;
}

int main26()
{
	test31();

	return 0;
}