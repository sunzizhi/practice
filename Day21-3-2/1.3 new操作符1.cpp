#include<iostream>
using namespace std;

//����new�������ڶ�����������
//�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ��ͷ����ò�����delete
//�﷨��new ��������
//����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��

int* func()
{
	int* a = new int(10);
	return a;
}

//�ڶ�������new��������

void test02()
{
	//����10�������ݵ����飬�ڶ���
	int* arr = new int[10];//10����������10��Ԫ��

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ 100~109
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	//�ͷ������ʱ�� Ҫ��[]�ſ���
	delete[]arr;
}
int main()
{	
	//test01
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	//delete p;

	//cout << *p << endl;

	//test02
	test02();
}