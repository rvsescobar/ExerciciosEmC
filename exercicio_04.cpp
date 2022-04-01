#include <stdio.h>

int main ()
{
    int num;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
    
    for(int i = num; i > 0; --i)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }
}