#include <iostream>
using namespace std;
int main() {

	//goto���

	cout << "1��xxxx" << endl;

	cout << "2��xxxx" << endl;

	goto FLAG;//FLAG��ı����
	cout << "3��xxxx" << endl;

	cout << "4��xxxx" << endl;

	FLAG:
	cout << "5��xxxx" << endl;
	
	return 0;
}