#include <stdio.h>

int dobro(int x)
{
    return x * 2;
}

float metade(int y)
{
    return y / 2;
}

int quadrado(int z)
{
    return z * z;
}

float tercaparte(float w)
{
    return w / 3;
}

int main()
{
    int original, result;
    float resultf;
    
    printf("Digite um número.\n");
    scanf("%d", &original);
    
    result = dobro(original);
    printf("\nO dobro : %d", result);
    
    resultf = metade(original);
    printf("\nA metade : %f", resultf);
    
    result = quadrado(original);
    printf("\nO quadro : %d", result);
    
    resultf = tercaparte(original);
    printf("\nA terça parte : %f", resultf);
    
    return 0;
}