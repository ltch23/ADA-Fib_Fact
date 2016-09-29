#ifndef F_F_H
#define F_F_H 

#include <iostream>

using namespace std;


template<class T>
class f_f
{
private:

	unsigned long long c_fib;
	unsigned long long c_fact;

	unsigned long long f1,f2;
	unsigned long long fa1,fa2;

public:
	
	f_f();
	T fibonacci(T num);
	T factorial(T num );
	void print_fi();
	void print_fa();

/*	
	~f_f();*/	
};

template<class T>
f_f<T>::f_f()
{
	c_fact=c_fib=0;
	f1=f2=fa1=fa2=0;

}

template<class T>
T f_f<T>::fibonacci( T num)
{
	c_fib++;
	if(num==0 or num==1)
	{	
		f1++;
		return num;
	}
	else
		{
		f2++;
		return fibonacci(num-2)+fibonacci(num-1);
		}
}


template<class T>
T f_f<T>::factorial( T num)
{
	c_fact++;
	if(num==0 )
	{
		fa1++;
		return 1;
	}
	else
	{
		fa2++;	
		return num*factorial(num-1);
	}

}


template<class T>
void f_f<T>::print_fi()
{
	cout<<"coste computacional:\t"<<c_fib<<endl;	
	cout<<"instrucciones:"<<endl;
	cout<<"if: "<<f1<<endl<<"else: "<<f2<<endl;
	cout<<"total:\t"<<f1+f2<<endl<<endl;

}
template<class T>
void f_f<T>::print_fa()
{
	cout<<"coste computacional:\t"<<c_fact<<endl;
	cout<<"instrucciones:"<<endl;	
	cout<<"if: "<<fa1<<endl<<"else: "<<fa2<<endl;
	cout<<"total:\t"<<fa1+fa2<<endl<<endl;
}

#endif // f_f_H

