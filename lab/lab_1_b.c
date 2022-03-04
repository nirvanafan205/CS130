#include <stdio.h>
#include <math.h>

//function convertor
int convert(long long);

int main()
{
	long long binary_number; //binary number
	printf("Enter a binary number: "); //asks for input
	scanf("%lld", &binary_number);
	printf("%lld in binary = %d in decimal", binary_number, convert(binary_number));
}

int convert(long long n)
{
	int dec = 0, i = 0, rem;

	while(n != 0)  
	{
		rem = n % 10;
		n /= 10;
		dec += rem * pow(2, i);
		++i;
	}

	return dec;
}
