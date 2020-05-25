#include <stdio.h>

void chuvi(int r);
void nhap(int *r);
void dientich(int r);
static const float pi = 22.0/7;

int main()
{
	int r;
	float pi;
	nhap(&r);
	chuvi(r);
	dientich(r);
	return 0;
}

void chuvi(int r)
{
	float p;
	p = 2*r*pi;
	printf("Chu vi cua hinh tron la: %.2f\n", p);
}

void nhap(int *r)
{
	printf("Moi ban nhap ban kinh hinh tron: ");
	scanf("%d", r);
}

void dientich(int r)
{
	float S;
	S = r*r*pi;
	printf("Dien tich cua hinh tron la: %.2f", S);
}


