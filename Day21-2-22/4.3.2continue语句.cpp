#include <iostream>
using namespace std;
int main() 
{
	for (int i = 0; i <= 100; i++)
	{
		//��������������ż�������
		if (i % 2 == 0)
		{
			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
		}
		cout << i << endl;
		//continue��û��ʹ����ѭ����ֹ����break������ѭ��
	}
}