#include<stdio.h>

int main()
{
	int a, b, c, sum;
	printf("Enter any three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	sum = calculatesum(a, b, c);
	printf("Sum = %d", sum);
	return 0;
}

calculatesum(int x, int y, int z)
{
	int d;
	d = x + y + z;
	return (d);
}
