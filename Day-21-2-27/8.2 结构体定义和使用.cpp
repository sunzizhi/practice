#include <iostream>
using namespace std;

//1������ѧ���������� ��ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨ struct ��������{ ��Ա�б�}
struct Student
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//����
	int score;

}s3;

//2��ͨ��ѧ�����ʹ�������ѧ��

int main() {

//2.1 struct Student s1
	struct Student s1;
	//��s1���Ը�ֵ��ͨ�����ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	
	cout << "������" << s1.name << "����:" << s1.age << "������" << s1.score << endl;
	
//2.2 struct Student s2 = {...}
	struct Student s2 = { "����",19,80 };
	cout << "������" << s2.name << "����:" << s2.age << "������" << s2.score << endl;
//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << "����:" << s3.age << "������" << s3.score << endl;

	/*�ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��

	�ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��

	�ܽ�3���ṹ��������ò����� ����.���� ���ʳ�Ա
}   */
