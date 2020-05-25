#include <stdio.h>

int main()
{
	int n, i;
	printf("Nhap vao chieu dai lon nhat cua hinh vuong: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
		printf("Dien tich cua hinh vuong co canh bang %d la: %d\n", i, lamvuong(i));
	return 0;	
}

int lamvuong(int x)
{
	int a;
	a = x * x;
	return (a);
}
