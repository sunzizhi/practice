#include <iostream>
using namespace std;
int main() {
	//��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
	for ( int num = 0;  num < 101;num++)
	{
		if ( num%7 == 7 || num%10 == 7 || num/10==7) 
		{
			cout << "������" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}

	return 0;
}
