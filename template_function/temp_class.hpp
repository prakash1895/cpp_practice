#include <iostream>
using namespace std;

template <class T>
class Multiplier
{
	T input1;
	T input2;
	T prod;
public:
	void setM1(T num1);
	void setM2(T num2);
	void setProduct();
	void printEquation();

};

template <class T>
void Multiplier<T>::setM1(T num1)
{
	input1 = num1;
}

template <class T>
void Multiplier<T>::setM2(T num2)
{
	input2 = num2;
}

template <class T>
void Multiplier<T>::setProduct()
{
	prod = input1*input2;
}

template <class T>
void Multiplier<T>::printEquation()
{
	cout<<input1<<" * "<<input2<<" = "<<prod<<"\n";
}