#include <iostream>
using namespace std;
int main() {

	//三目运算符

	//创建三个变量 a b c
	//将a和b作比较，将变量大的值赋值给变量c
	//类似if 问号前是条件，如果是真，执行问号后的，假执行冒号后的
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);

	cout << "c=" << c << endl;

	//在C++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;

	return 0;
	return 0;
}