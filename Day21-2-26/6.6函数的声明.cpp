#include<iostream>
using namespace std;

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ


//�������Զ�Σ�����ֻ��һ��
//����
int max(int a, int b);
int max(int a, int b);
//����
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