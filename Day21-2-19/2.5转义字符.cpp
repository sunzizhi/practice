#include<iostream>
using namespace std;
int main(){

	//转义字符

	//换行符 \n

	cout << "hello world\n12";

	//反斜杠   \\

	cout << "\\" << endl;

	//水平制表符 \t    作用整齐输出数据(自动补齐到八位)

	cout << "aaa\t helloworld" << endl;
	cout << "aa\t helloworld" << endl;
	cout << "aaaaaa\t helloworld" << endl;

	system("pause");
	return 0;
}