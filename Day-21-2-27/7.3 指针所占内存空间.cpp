#include<iostream>
using namespace std;

int main() {

	//ָ����ռ�ڴ�ռ�
	int a = 10;
	//int *p;
	//p=&a;
	
	int* p = &a;

	//����ָ��������32λ����ϵͳ����4���ֽ�
	//��64λ����ϵͳ����8���ֽ�
	cout << "sizeof(int *)=" << sizeof(int *) << endl;
	cout << "sizeof(float *)=" << sizeof(float *) << endl;
	cout << "sizeof(double *)=" << sizeof(double *) << endl;
	cout << "sizeof(char *)=" << sizeof(char *) << endl;
}