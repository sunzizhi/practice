#include <iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>
int main() {
	//������������ �������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

		//1��ϵͳ���������
	int num = rand() % 100 + 1;	//rand()%100 ���� 0~99

	//2����ҽ��в²�
	int val = 0;//������������

	//3���ж���ҵĲ²�
	while (1)
	{
		cin >> val;
		if (val > num) 
		{
			cout << "�²����" << endl;
		}
		else if(val <num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ��¶���" << endl;
			break;
		}
	}
	
	//�¶�  �˳���Ϸ

}