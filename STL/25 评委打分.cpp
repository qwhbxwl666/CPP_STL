#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

//ѡ����
class Person
{
public:
	string name; //����
	int score; //ƽ����
public:
	Person(string name, int score)
	{
		this->name = name;
		this->score = score;
	}
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//��������person������뵽������
		v.push_back(p);
	}
}

//���
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ����ŵ�deque������
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; //rand() % 41����0~40�����
			d.push_back(score);
		}
	
		//��ӡ����
		cout << "ѡ�֣� " << it->name << "   ���֣� ";
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}

		cout << endl;

		//����
		sort(d.begin(), d.end());

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit; //�ۼ�ÿ����ί�ķ���
		}

		int avg = sum / d.size();

		//��ƽ���ָ�ֵ��ѡ������
		it->score = avg;
	}
}

//��ӡ�����Ϣ
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������ " << it->name << "   ƽ���֣� " << it->score << endl;
	}
}

int main25()
{
	//���������
	srand((unsigned int)time(NULL));

	//1.����5��ѡ��
	vector<Person> v; //���ѡ������
	createPerson(v);

	//2.��5��ѡ�ִ��
	setScore(v);

	//3.��ʾ���÷�
	showScore(v);

	return 0;
}