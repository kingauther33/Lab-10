#include <stdio.h>

void nhap(int *a);
int gthua(int a);

int main()
{
	int a;
	nhap(&a);
	printf("Giai thua cua a! la: %d", gthua(a));
	return 0;
}

void nhap(int *a)
{
	printf("Moi ban nhap vao so nguyen a: ");
	scanf("%d", a);
	printf("So nguyen ban vua nhap la: %ld\n", *a);
	return;
}

int gthua(int a)
{
	int i;
	int temp;
	temp = 1;
	if (a!=0)
	{
		for (i=2; i<=a; i++)
			temp *= i;
		return (temp);
	}
	else
		return 1;
}

