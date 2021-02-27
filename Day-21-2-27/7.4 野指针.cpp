#include<iostream>
using namespace std;
int main() {

	//野指针
	//在程序中，尽量避免出现野指针
	////指针变量p指向内存地址编号为0x1100的空间
	int* p = (int*)0x1100;

	cout << *p << endl;
	//空指针和野指针都不是我们申请的空间，因此不要访问。
}