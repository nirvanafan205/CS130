#include <stdio.h>
#include <math.h>

long long convert(int n) // conversion function
{
	long long binary_number = 0;
	int a, i = 1;

	while(n != 0)
	{
		a = n % 2;
		n /= 2;
		binary_number += a * i;
		i*= 10;
	}

	return binary_number;
}

int main()
{
	int decimal_num, binary_num; //decimal and binary variables

	printf("Enter a decimal number: ");

	scanf("%d", &decimal_num);
	binary_num = convert(decimal_num); //calls conversion function

	printf("%d in decimal = %lld in binary\n", decimal_num, binary_num);
}
