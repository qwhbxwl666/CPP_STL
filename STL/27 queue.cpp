#include <iostream>
#include <queue>
#include <string>

using namespace std;

//������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ

/*
���캯����
- queue<T> que;                         //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
- queue(const queue &que);				//�������캯��

��ֵ������
- queue& operator=(const queue &que);   //���صȺŲ�����

���ݴ�ȡ��
- push(elem);                           //����β���Ԫ��
- pop();                                //�Ӷ�ͷ�Ƴ���һ��Ԫ��
- back();                               //�������һ��Ԫ��
- front();                              //���ص�һ��Ԫ��

��С������
- empty();								//�ж϶�ջ�Ƿ�Ϊ��
- size();								//����ջ�Ĵ�С
*/

class Person
{
public:
	string name;
	int age;

public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
};

void test32()
{
	//��������
	queue<Person> q;

	//׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);

	//����������Ԫ�أ���Ӳ���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//���в��ṩ������������֧���������
	while (!q.empty())
	{
		//�����ͷԪ��
		cout << "��ͷԪ��--������ " << q.front().name << "   ���䣺 " << q.front().age << endl;

		cout << "��βԪ��--������ " << q.back().name << "   ���䣺 " << q.back().age << endl;

		cout << endl;
		//������ͷԪ��
		q.pop();
	}

	cout << "���д�СΪ�� " << q.size() << endl;
}

int main27()
{
	test32();

	return 0;
}