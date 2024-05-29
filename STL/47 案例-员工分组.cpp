#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>

using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string name;
	int salary;
};

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.name = "Ա��";
		worker.name += nameSeed[i];

		worker.salary = rand() % 10000 + 10000; //10000 ~ 19999
		//��Ա�����뵽������
		v.push_back(worker);
	}
}

//Ա������
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3; //0 1 2

		//��Ա�����뵽������
		//key���ű�ţ�value����Ա��
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& m)
{
	// 0 A B C 1 D E 2 F G...
	cout << "�߻����ţ� " << endl;

	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); //ͳ�ƾ�������
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.name << "   ���ʣ� " << pos->second.salary << endl;
	}

	cout << "---------------------------------" << endl;

	cout << "�������ţ� " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); //ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.name << "   ���ʣ� " << pos->second.salary << endl;
	}

	cout << "---------------------------------" << endl;

	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); //ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.name << "   ���ʣ� " << pos->second.salary << endl;
	}
}

int main47()
{
	srand((unsigned int)time(NULL));

	//1.����Ա��
	vector<Worker> vWorker;
	createWorker(vWorker);

	//2.Ա������
	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);

	//3.������ʾԱ��
	showWorkerByGroup(mWorker);

	return 0;
}