#include <stdio.h>

char nhap(int *x, int *y, int *z);
int main()
{
	int a, b, c;
	char d;
	d = nhap (&a, &b, &c);
	printf("Hai so a va b la: %d, %d\n", a, b);
	printf("Gia tri cua a*b la: %d\n", c);
	printf("Gia tri cua d la: %c", d);
	return 0;
}


char nhap(int *x, int *y, int *z)
{
	printf("Moi ban nhap a va b: ");
	scanf("%d %d", x, y);
	*z = *x * *y;
	return 'E';
}


