// 
#include <iostream>
#include <algorithm>
#include "ConsoleApplication1.h"
using namespace std;
int max (int a,int b,int c)
{
	int maximum;
	if (a > b) maximum = a;
	if (a > c) maximum = a;
	if (a < b) maximum = b;
	if (a < c) maximum = c;
	if (b > c) maximum = b;
	if (c > b) maximum = c;

	return maximum;

}

int min(int a, int b, int c)
{
	int minimum;
	if (a < b) minimum = a;
	if (a < c) minimum = a;
	if (a > b) minimum = b;
	if (a > c) minimum = c;
	if (b < c) minimum = b;
	if (c < b) minimum = c;

	return minimum;

}


bool positive(int x) {
	
	if (x > 0)
		return true;
	else
		return false;
}



int main()
{
	cout << max(-1, 0, 1)<<endl;
	cout << min(-1, 0, 1) << endl;
	cout << positive(5) << endl;
	return 0;
}
