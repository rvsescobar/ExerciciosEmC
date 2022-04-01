#include <stdio.h>
#include <conio.h>

int main(){
    
    char sexo;
    int idade_ind, idade_tot, total_aluno, total_aluno_m, total_aluno_f, ativ, ativ_m, ativ_c, ativ_e;
    float idade_media, perc_masc, perc_fem;

    printf("Bem-vindo o sistema de análise da academia FikaForte.\n");
    printf("Por favor informe as solicitações pedidas.\n");
    
    printf("Qua a sua idade? ");
    scanf("%d", &idade_ind);
    idade_tot = idade_ind;
    total_aluno = 1;
    total_aluno_m = 0;
    total_aluno_f = 0;
    
    printf("Você se considera sendo do sexo masculino (informe \"M\") ou feminino (informe \"F\")?\n");
    scanf("%s", &sexo);
    
    if (sexo == 'M')
    {
        total_aluno_m = 1;
    }
    else
    {
        total_aluno_f = 1;
    }
    
    total_aluno = 1;
    
    ativ_m = 0;
    ativ_c = 0;
    ativ_e = 0;
    
    printf("Qual a sua principal atividade na academia?\n");
    printf("Digite 1 para musculação.\n");
    printf("Digite 2 para corrida.\n");
    printf("Digite 3 para fotos nos espelho.\n");
    
    scanf("%d", &ativ);
    
    switch (ativ)
    {
        case 1:
            ativ_m = ativ_m + 1;
            break;
        case 2:
            ativ_c = ativ_c + 1;
            break;
        default:
            ativ_e = ativ_e + 1;
    }
    
    printf("Deseja informar mais alunos?\n");
    printf("Caso queria informe a idade do próximo aluno.\n");
    printf("Senão informe um idade negativa.");
    
    scanf("%d", &idade_ind);
    
    while (idade_ind > -1)
    {
        idade_tot = idade_tot + idade_ind;
        total_aluno = total_aluno + 1;
        
        printf("Você se considera sendo do sexo masculino (informe \"M\") ou feminino (informe \"F\")?\n");
        scanf("%s", &sexo);
    
        if (sexo == 'M')
        {
            total_aluno_m = total_aluno_m + 1;
        }
        else
        {
            total_aluno_f = total_aluno_f + 1;
        }
        
        printf("Qual a sua principal atividade na academia?\n");
        printf("Digite 1 para musculação.\n");
        printf("Digite 2 para corrida.\n");
        printf("Digite 3 para fotos nos espelho.\n");
        
        scanf("%d", &ativ);
        
        switch (ativ)
        {
            case 1:
                ativ_m = ativ_m + 1;
                break;
            case 2:
                ativ_c = ativ_c + 1;
                break;
            default:
                ativ_e = ativ_e + 1;
        }
        
        printf("Deseja informar mais alunos?\n");
        printf("Caso queria informe a idade do próximo aluno.\n");
        printf("Senão informe um idade negativa.");
        
        scanf("%d", &idade_ind);
    }
    
    printf("\nAtualmente a academia tem %d alunos.\n", total_aluno);
    printf("A idade médida desse povo é de %d anos.\n", idade_tot / total_aluno);
    printf("Sendo %d de alunos, que representam %d porcento.\n", total_aluno_m, (total_aluno_m / total_aluno) * 100);
    printf("E tendo %d de alunas, que representam %d porcento.\n", total_aluno_f, (total_aluno_f / total_aluno) * 100);
    
    if (ativ_m > ativ_c)
    {
        if (ativ_m > ativ_e)
        {
            printf("Sendo a musculação a atividade mais feita.");
        }
        else
        {
            printf("Sendo o espelho a atividade mais feita.");
        }
    }
    else
    {
        if (ativ_c > ativ_e)
        {
            printf("Sendo a corrida a atividade mais feita.");
        }
        else
        {
            printf("Sendo o espelho a atividade mais feita.");
        }
    }
    
    return 0;
}