#include <stdio.h>

/**
 * main - print variables
 *
 * Return: 0 if sucessful
 * */
int main(void)
{
	printf("Size of variable char : %d\n",sizeof(1));
	printf("Size of variable int : %d\n",sizeof(4));
	printf("Size of variable long int : %d\n",sizeof(4));
	printf("Size of variable long long int : %d\n",sizeof(8));
	printf("Size of variable float : %d\n",sizeof(4));
	return (0);
}

