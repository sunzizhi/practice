#include<iostream>
using namespace std;

//����ӷ�����
//���������ʱ��num1��num2��û����ʵ����
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	//main�����е���add
	int a = 10;
	int b = 20;
	
	//���������﷨���������� (����)
	//a��b��Ϊ ʵ�ʲ��������ʵ��
	//�����ú�����ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c = add(a, b);

	cout << "c=" << c << endl;

	a = 100;
	b = 200;
	int sum = add(a, b);

	cout << "sum=" << sum << endl;
	//����������С�����ڳ�Ϊ�βΣ���������ʱ����Ĳ�����Ϊʵ��
}