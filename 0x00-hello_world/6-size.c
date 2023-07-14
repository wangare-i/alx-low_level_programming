#include <stdio.h>
/**
 *main - Entry point
 *Return: always 0 (success)
 */
int main(void)
{
     char:a;
     int:b;
     long:c;
     long long int:d;
     float:f;


	print("Size of a char: %d byte9s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}

