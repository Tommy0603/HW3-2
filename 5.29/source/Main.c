#include <stdio.h>
#include <stdlib.h>

int Function(int x, int y);

int main(void)
{
	int a, b,c;
	int n = 1;
	int i = 2;

	printf("�п�J��Ӿ�ƨ��̤p�����ơG");
	scanf_s("%d%d",&a,&b);
	printf("�̤p�����Ƭ��G%d\n", Function(a,b));
	system("pause");
}

int Function(int x, int y)
{
	int c,n=1,i=2;
	if (x < y)
	{
		c = x;
		x = y;
		y = c;
	}
	for (;;)
	{
		if (n % x == 0)
		{
			c = n;
			break;
		}
		else
		{
			n = y * i;
			i++;
		}
	}
}