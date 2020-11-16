#include <stdio.h>
#include <stdlib.h>

int function(char x,int y);
char text1[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
char text2[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int main(void)
{
	
	char aa = 'a';
	int bb = 0;
	printf("請輸入一個英文字母（大小寫皆可）\n");
	scanf_s("%c",&aa,sizeof(aa));

	for (bb = 0; bb <= 25; bb++)
	{
		if (aa == text1[bb])
			printf("%c\n",function(bb,0));
		if (aa == text2[bb])
			printf("%c\n", function(bb, 1));
	}
	system("pause");
	return 0;
}

int function(char x, int y)
{
	if (y == 0)
		return text2[x];
	if (y == 1)
		return text1[x];
}