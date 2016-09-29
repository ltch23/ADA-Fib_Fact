#include "f_f.h"
#include <iostream>

using namespace std;

int main()
{
	f_f<unsigned long long> ff;
	unsigned long long num;
	
	cout<<"ingrese num: ";cin>>num;
	
	cout<<"\nFibonacci: "<<ff.fibonacci(num)<<endl;
	ff.print_fi();
	
	cout<<"Factorial: "<<ff.factorial(num)<<endl;
	ff.print_fa();

	return 0;
}