#include <iostream>
using namespace std;
int main()
{
	//���Գɼ�ͳ�ƣ�

	//����������������ͬѧ�����������ģ����壩����һ�ο����еĳɼ��ֱ����±���ֱ��������ͬѧ���ܳɼ�

	//1��������ά����
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string name[3] = { "����","����" ,"����" };
	//2��ͳ��ÿ���˵��ܺͷ���
	for (int i = 0; i < 3; i++)
	{
		int sum = 0; //ͳ�Ʒ����ܺͱ���
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			//cout << scores[i][j] << " ";
		}
		cout << name[i] << "���ܷ�Ϊ��" << sum << endl;;
	}
	
	return 0;
}