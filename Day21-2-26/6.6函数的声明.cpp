#include<iostream>
using namespace std;

//函数的声明
//比较函数，实现俩个整形数字进行比较，返回较大的值


//声明可以多次，定义只能一次
//声明
int max(int a, int b);
int max(int a, int b);
//定义
int max(int a, int b)
{
	return a > b ? a : b;
}

int main() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;
	
	return 0; 
}