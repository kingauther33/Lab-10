#include <stdio.h>

int main()
{
	incre();
	incre();
	incre();
}
incre()
{
	char var = 65;
	printf("The character stored in var is %c\n", var++);
}
