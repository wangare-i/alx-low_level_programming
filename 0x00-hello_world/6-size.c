#include <stdio.h>
/**
 *main - Entry point
 *Return: always 0 (success)
 */
int main(void)
{
     char a;
     int b;
     long c;
     long long int d;
     float f;


	print("Size of a char: %d byte(s)\n",(unsigned)sizeof(char));
	printf("Size of an int: %d byte(s)\n",(unsigned)sizeof(int));
	printf("Size of a long int: %d byte(s)\n"(unsigned)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n",(unsigned)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n",(unsigned)sizeof(float));
	return (0);
}

