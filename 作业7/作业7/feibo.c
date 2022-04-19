

#include <stdio.h>

int print(int n)
{
	if (n <= 2) {
		return 1;
	}
	else

    return print(n - 1) + print(n - 2);


}

int main()
{
	int num = 1;
	int a = 0; 

	scanf_s("%d", &a);

	int ret = 0;
	ret = print(a);
	printf("第%d个斐波那契数是%d！", a, ret);
	return 0;
}