#include<iostream>
using namespace std;

int main() {
	//��������sizeof�����������ռ���ڴ��С
	//�﷨��sizeof����������/������
	//short(������)	2�ֽ�(-2 ^ 15 - 2  ^ 15 - 1)
	//int(����)	4�ֽ�(-2 ^ 31 - 2 ^ 31 - 1)
	//long(������)	WindowsΪ4�ֽڣ�LinuxΪ4�ֽ�(32λ)��8�ֽ�(64λ)	(-2 ^ 31  -  2 ^ 31 - 1)
	//long long(��������)	8�ֽ�(-2 ^ 63 -  2 ^ 63 - 1)
	cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl;

	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;

	cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;

	cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;

	system("pause");

	return 0;
}