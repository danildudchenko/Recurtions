#include <iostream>
using namespace std;
int Factorial(int number)
{
	return number > 0 ? number * Factorial(number - 1) : 1;
}
double Power(int number, int power)
{
	return power > 0 ? number * Power(number, power - 1) : power < 0 ? 1. / number * Power(number, power + 1) : 1;
}
int Fibonacci(int number)
{
	return number==0? 0:number==1? 1: Fibonacci(number - 1) + Fibonacci(number - 2);
}
void main()
{
	int number = 0;cin >> number;
	int power = 0;cin >> power;
	cout << "Fact is: "<<Factorial(number) << endl;
	cout << "Number in power is: " << Power(number, power)<<endl;
	cout << "Fibonacci number is: " << Fibonacci(number);
}