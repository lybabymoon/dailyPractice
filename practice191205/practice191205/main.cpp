#include <iostream>
using namespace std;

int jumpFloorII(int number) {
	int f1 = 1;
	int f2 = 1;
	for (int i = 2; i <= number; i++){
		f2 = 2 * f1;
		f1 = f2;
	}
	return f2;
}

int main1()
{
	return 0;
}