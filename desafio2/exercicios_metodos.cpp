#include "exercicios_metodos.h"

void ImprimirMenu()
{
    printf("|---Programar é Arte!---|\n"); 
    printf("| 1 - Exercício\t\t|\n");
    printf("| 2 - Exercício\t\t|\n");
    printf("| 3 - Exercício\t\t|\n");
    printf("| 4 - Exercício\t\t|\n");
    printf("| 5 - Exercício\t\t|\n");
    printf("| 6 - Exercício\t\t|\n");
    printf("| 7 - Exercício\t\t|\n");
    printf("| 8 - Exercício\t\t|\n");        
    printf("| 0 - Sair\t\t|\n");
    printf("|-----------------------|\n");    
}

int main()
{    
    SetConsoleOutputCP(CP_UTF8);
    int opcao = -1;
    do
    {
        system("cls");        
        ImprimirMenu();
        printf("Digite uma opção:");
        scanf("%d",&opcao);        
        
        switch (opcao)
        {
        case 1:
            Exercicio1();
            break;
        case 2:
            Exercicio2();
            break;
        case 3:
            Exercicio3();
            break;
        case 4:
            Exercicio4();
            break;
        case 5:
            Exercicio5();
            break;
        case 6:
            Exercicio6();
            break;
        case 7:
            Exercicio7();
            break;
        case 8:
            Exercicio8();
            break;        
        default:
            if (opcao != 0)
            {
                printf("\tOpção inválida!\n");
            }
            break;
        }

        system("pause");
    } while (opcao != 0);

    return 0;
}
