#include<iostream>

using namespace std;

int factorial(int n)
{
	if(n>1){
		return n * factorial(n-1);
	}
	else{
		return 1;
	}

}

int main()
{
	int factorial(int);
	int fact, value;
	cout << "Enter a number: ";
	cin >> value;
	fact = factorial(value);
	cout << "Factorial of the number is:"<<fact<<endl;
	return 0;

}