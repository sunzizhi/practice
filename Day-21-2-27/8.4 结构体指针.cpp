#include<iostream>
using namespace std;

//�ṹ��ָ��

//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

int main() {

	//1������ѧ���ṹ�����
	 student s = { "����",18,100 };

	//2��ͨ��ָ��ָ��ṹ�����
	 student* p = &s;
	//3��ͨ��ָ����ʽṹ������е�����

	 cout << " ����:" << p->name << " ���䣺" << p -> age << " ������" << p->score << endl;

	 //���ò����� ->����ͨ���ṹ��ָ����ʽṹ������
}