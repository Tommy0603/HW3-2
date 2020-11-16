#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);

int main(void)
{
	int base, exponent;
	printf("請輸入底數與指數：");
	scanf_s("%d%d",&base,&exponent);
	printf("%d的%d次方為：%d\n",base,exponent,power(base,exponent));
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