#include <stdio.h>

int main(){
    
    int qtd_horas, qtd_hora_normal;

    float hora_normal, hora_extra, salario_normal, salario_extra, salario_bruto, salario_liq;
    
    printf("Bem-vindo o sistema de cálculo de horas da Hiphotheticus.\n");
    printf("Para iniciarmos, informe a quantidade de horas trabalhadas ou zero para finalizar o programa.\n");
    
    scanf("%d", &qtd_horas);
    
    qtd_hora_normal = 176;
    hora_normal = 10;
    hora_extra = 15;
    
    while (qtd_horas != 0)
    {
        if (qtd_horas <= qtd_hora_normal)
        {
            salario_normal = qtd_horas * hora_normal;
            salario_extra = 0;
        }
        else
        {
            salario_normal = qtd_horas * hora_normal;
            salario_extra = (qtd_horas - qtd_hora_normal) * hora_extra;
        }
        
        salario_bruto = salario_normal + salario_extra;
        salario_liq = salario_bruto - (salario_bruto * 0,1);
        
        printf("Salário bruto do funcionário: ");
        printf("%f", salario_bruto);
        printf("\nSalário líquido do funcionário: ");
        printf("%f", salario_liq);
        
        printf("\n\nDeseja calcular outro salário? Informe a quantidade de horas trabalhadas ou zero para finalizar o programa.\n");
    
        scanf("%d", &qtd_horas);
    }
    
    return 0;
}