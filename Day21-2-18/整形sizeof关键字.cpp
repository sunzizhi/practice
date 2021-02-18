#include<iostream>
using namespace std;

int main() {
	//可以利用sizeof求出数据类型占用内存大小
	//语法：sizeof（数据类型/变量）
	//short(短整型)	2字节(-2 ^ 15 - 2  ^ 15 - 1)
	//int(整型)	4字节(-2 ^ 31 - 2 ^ 31 - 1)
	//long(长整形)	Windows为4字节，Linux为4字节(32位)，8字节(64位)	(-2 ^ 31  -  2 ^ 31 - 1)
	//long long(长长整形)	8字节(-2 ^ 63 -  2 ^ 63 - 1)
	cout << "short 类型所占内存空间为： " << sizeof(short) << endl;

	cout << "int 类型所占内存空间为： " << sizeof(int) << endl;

	cout << "long 类型所占内存空间为： " << sizeof(long) << endl;

	cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;

	system("pause");

	return 0;
}