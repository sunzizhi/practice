#include<iostream>
using namespace std;

//const��ʹ�ó���

struct student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudents(const student *s)
{
	//s->age = 150; //����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǳ��������������
	cout << "������" << s->name << " ���䣺" << s->age << " �ɼ��� " << s->score << endl;
	
}

int main() {

	//�����ṹ�����
	struct student s = { "����",15,70 };

	printStudents(&s);
	//ͨ��������ӡ�ṹ�������Ϣ
	cout << "������" << s.name << " ���䣺" << s.age << " �ɼ��� " << s.score << endl;
	
}