#include <iostream>
#include <climits>
#include <float.h>
#include <cmath>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	short a;
	int b; 
	long c; 
	long long d;
	unsigned short aa; 
	unsigned int bb; 
	unsigned long cc; 
	unsigned long long dd;
	unsigned char x = 129;
	char single_quote = '\'';
	bool found = false;

	float i = 10.0 /3;
	i = i*100000000000; 
	double ii; 
	long double iii;

	std::string greeting ="hello";
	std::cout << greeting.length() << std::endl;

	
	cout << std::boolalpha << found <<std::endl;
	cout << std::fixed << i << std::endl;
	cout << LDBL_DIG << std::endl;

	getline(std::cin, greeting);

	cout << greeting << endl;

	auto xx = 5U;
}