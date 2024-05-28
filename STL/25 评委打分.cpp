#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

//选手类
class Person
{
public:
	string name; //姓名
	int score; //平均分
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
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//将创建的person对象放入到容器中
		v.push_back(p);
	}
}

//打分
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放到deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; //rand() % 41生成0~40随机数
			d.push_back(score);
		}
	
		//打印测试
		cout << "选手： " << it->name << "   评分： ";
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}

		cout << endl;

		//排序
		sort(d.begin(), d.end());

		//去除最高分和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit; //累加每个评委的分数
		}

		int avg = sum / d.size();

		//将平均分赋值给选手身上
		it->score = avg;
	}
}

//打印结果信息
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名： " << it->name << "   平均分： " << it->score << endl;
	}
}

int main25()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1.创建5名选手
	vector<Person> v; //存放选手容器
	createPerson(v);

	//2.给5名选手打分
	setScore(v);

	//3.显示最后得分
	showScore(v);

	return 0;
}