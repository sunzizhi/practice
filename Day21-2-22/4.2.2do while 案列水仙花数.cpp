#include <iostream>
using namespace std;
int main(){
	//求三位数的水仙花数
	//水仙花数指一个三位数，他的每个位上的数字的3次幂之和等于它本身
	int num = 100;

	do
	{
		int a = 0;//个位
		int b = 0;//十位	
		int c = 0;//百位
		

		a = num % 10; //获取数字的个位
		b = num / 10 % 10; //获取数字的十位
		c = num / 100;//获取数字的百位

		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}

		num++;
	} while (num < 1000);

	return 0;
}