#include <stdio.h>
#include <stdlib.h>

long long int Fibonacci(int n);

int main(void)
{
	unsigned int n,i;
	unsigned long int j = 0;
	printf("請輸入該數列的項：");
	scanf_s("%d",&n);
	printf("(a)\n");
	for (i = 1; i <= n; i++)
	{
		printf("%I64d ", Fibonacci(i));
	}
	printf("\n");

	printf("(b)\n");
	for(;;)
	{
		if (Fibonacci(n+j) < 0)
		{
			printf("為%I32d項，最大值為%I64d\n ",(j+n), Fibonacci(n+j));
			break;
		}
		else
		{
			j++;		
		}
	}
	
	system("pause");
}
long long int a1 = 0,a2 = 1,a_now = 0;
long long int Fibonacci(int n)
{
	switch (n)
	{
	case 1:
		return a_now;
		break;
	case 2:
		a_now = a1 + a2;
		return a_now;
		break;
	default :
		a_now = a1 + a2;
		a1 = a2;
		a2 = a_now;
		return a_now;
		break;
	}
}