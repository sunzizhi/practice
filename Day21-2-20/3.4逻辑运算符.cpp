#include<iostream>
using namespace std;

int main() {

	//逻辑运算符 !
	//如果a为假，则!a为真； 如果a为真，则！a为假
	int a = 10;
	//在C++中只要不是0都为真
	cout << !a << endl;

	cout << !!a << endl;

	//逻辑运算符 &&
	//如果a和b都为真，则结果为真，否则为假。
	//同真为真，其余为假

	//逻辑运算符 ||   
	//如果a和b有一个为真，则结果为真，二者都为假时，结果为假。
	// 同假为假，其余为真（只要一个是真就是真）

	return 0;
}