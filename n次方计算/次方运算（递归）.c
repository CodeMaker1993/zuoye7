

#include<stdio.h>

int sqr(int a,int b)
{
	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	else
		return a * sqr(a, b - 1);

}


int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	sqr(a, b);
	int ret = sqr(a, b);
	printf("%d的%d次方是%d!", a, b, ret);
	return 0;
}