#include <iostream>
using namespace std;
#include "VecFF.h"

int main()
{
	float a[3] = { 1, 2, 3 };
	float b[3] = { 2, 4, 6 };
	VecFF v1(3, a);
	VecFF v2(3, b);
	VecFF v3(v1.add(v2));
	v1.print();
	cout << "+";
	v2.print();
	cout << "=";
	v3.print();
	cout << endl;
	return 0;
}