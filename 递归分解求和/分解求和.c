
#include<stdio.h>

int digi(int a)
{
	if (a / 10 == 0)
		return a;
	else

		return a%10+digi(a / 10);

}


int main() {
	int a = 0;
	scanf_s("%d", &a);
	digi(a);
	int b = digi(a);
	printf("%d�ķֽ������%d", a, b);
	return 0;
}