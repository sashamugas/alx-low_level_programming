#include <stdio.h>

int main(void)
{
	char character;
	int integer;
	long longNumber;
	long long reallyLongNumber;
	float decimalNumber;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of a an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longNumber));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(reallyLongNumber));
	printf("Size of a float: %lu byte(s)\n", sizeof(decimalNumber));

	return(0);
}
