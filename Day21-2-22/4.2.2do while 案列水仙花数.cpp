#include <iostream>
using namespace std;
int main(){
	//����λ����ˮ�ɻ���
	//ˮ�ɻ���ָһ����λ��������ÿ��λ�ϵ����ֵ�3����֮�͵���������
	int num = 100;

	do
	{
		int a = 0;//��λ
		int b = 0;//ʮλ	
		int c = 0;//��λ
		

		a = num % 10; //��ȡ���ֵĸ�λ
		b = num / 10 % 10; //��ȡ���ֵ�ʮλ
		c = num / 100;//��ȡ���ֵİ�λ

		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}

		num++;
	} while (num < 1000);

	return 0;
}