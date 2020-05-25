#include <stdio.h>

int main()
{
	int a, b;
	printf("Moi ban nhap 2 so a, b: ");
	scanf("%d%d", &a, &b);
	printf("Tong hai so a va b la: %d", tong(a,b));
}

int tong(x,y)
{
	int tong;
	tong = x + y;
	return (tong);
}
