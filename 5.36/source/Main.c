#include <stdio.h>
#include <stdlib.h>

unsigned long long int hanoi(int x);

int main() {
    int plate;
    printf("�п�J�L�ơG");
    scanf_s("%d", &plate);
    printf("1~%d�L�ݲ��ʡG", plate);
    for (int n = 1; n <= plate; n++)
    {
        printf("%I64u ", hanoi(n));
    }
    printf("\n");
    system("pause");
}

unsigned long long int hanoi(int x)
{
    unsigned long long int c = 1;
    for(int i=1;i<=x;i++)
    { 
        c*=2;     
    }              
    return c - 1 ;
           
}
