

#include <stdio.h>


int main()
{
	int a=1;
	int b = 1;
	int c= 1;
	int m,i;
	scanf_s("%d", &m);
	if (m <= 2)
		printf("��%d��쳲���������1!",m);
	else
	{
		for (i = 1; i <= m -2; i++)
		{
			c = a + b;
			a = b;
			b = c;
			if (i == m - 2) { printf("��%d��쳲���������%d", m, c); }
		}
	}

	return 0;
}