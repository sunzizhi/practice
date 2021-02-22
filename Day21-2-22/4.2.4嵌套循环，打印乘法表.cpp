#include<iostream>
using namespace std;
int main() {
	//内行外列，内层控制行，外层控制列
	for (int i = 1; i <=9; i++)
	{
		for (int j = 1; j<=i; j++)
		{
			cout << i <<"*" << j << "=" << i * j <<"  " ;
		}
		cout << endl;
	}
}