#include<iostream>
using namespace std;

int main() {

	//指针所占内存空间
	int a = 10;
	//int *p;
	//p=&a;
	
	int* p = &a;

	//所有指针类型在32位操作系统下是4个字节
	//在64位操作系统下是8个字节
	cout << "sizeof(int *)=" << sizeof(int *) << endl;
	cout << "sizeof(float *)=" << sizeof(float *) << endl;
	cout << "sizeof(double *)=" << sizeof(double *) << endl;
	cout << "sizeof(char *)=" << sizeof(char *) << endl;
}