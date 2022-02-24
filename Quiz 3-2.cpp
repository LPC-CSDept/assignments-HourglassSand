#include <iostream>
#include <cstdlib>  // C standard Library
#include <ctime> 
#include <iomanip> 
using namespace std;

int main()
{
	int num1, num2, num3;
	int sum; 
	float avg;
	srand(time(0));
	
	num1 = rand() % 100 ; // 0 ~ 99  
	cout << num1 << endl;

	num2 = rand() % 100 ; // 0 ~ 99  
	cout << num2 << endl;

    num3 = rand() % 100 ; // 0 ~ 99  
	cout << num3 << endl;


    sum = num1 + num2 + num3;
	cout << sum << endl;
	avg = sum / 3.0;
	cout << avg << endl;
}