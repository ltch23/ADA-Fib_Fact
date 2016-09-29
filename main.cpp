#include "f_f.h"
#include <iostream>

using namespace std;

int main()
{
	f_f<int> ff;
	int num;
	num=5;

	cout<<"Fibonacci: "<<ff.fibonacci(num)<<endl;
	cout<<"Factorial: "<<ff.factorial(num)<<endl;


	return 0;
}