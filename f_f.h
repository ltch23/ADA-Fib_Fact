#ifndef F_F_H
#define F_F_H 

#include <iostream>

using namespace std;


template<class T>
class f_f
{
private:

	int c_fib;
	int c_fact;

public:
	
	T fibonacci(T num);
	T factorial(T num );
	void printfi();
	void printfa();

/*	f_f();
	~f_f();*/	
};

template<class T>
T f_f<T>::fibonacci( T num)
{
	if(num==0 or num==1)
		return num;
	else
		return fibonacci(num-2)+fibonacci(num-1);
}


template<class T>
T f_f<T>::factorial( T num)
{
	if(num==0 )
		return 1;
	else
		return num*factorial(num-1);	
}



#endif // f_f_H

