#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);

int main(void)
{
	int base, exponent;
	printf("�п�J���ƻP���ơG");
	scanf_s("%d%d",&base,&exponent);
	printf("%d��%d���謰�G%d\n",base,exponent,power(base,exponent));
	system("pause");
}
int power(int base, int exponent)
{
	int Ans = 1;
	for (int i = 1; i <= exponent; i++)
	{
		Ans = Ans * base;
	}
	return Ans;
}