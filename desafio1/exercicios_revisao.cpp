#include <stdio.h>
#include <windows.h>
#include "uteis.h"
#include "exercicios_revisao.h"

void ImprimirMenu()
{
    printf("| 01 - Exercício\n");
    printf("| 02 - Exercício\n");
    printf("| 03 - Exercício\n");
    printf("| 04 - Exercício\n");
    printf("| 05 - Exercício\n");
    printf("| 06 - Exercício\n");
    printf("| 07 - Exercício\n");
    printf("| 08 - Exercício\n");
    printf("| 09 - Exercício\n");
    printf("| 10 - Exercício\n");
    printf("| 11 - Exercício\n");
    printf("| 12 - Exercício\n");
    printf("| 13 - Exercício\n");
    printf("| 14 - Exercício\n");
    printf("| 15 - Exercício\n");
    printf("| 16 - Exercício\n");
    printf("| 0 - Sair\n");
    ImprimirSeparador();
}

int main()
{    
    SetConsoleOutputCP(CP_UTF8);
    int opcao = -1;
    do
    {
        system("cls");
        ImprimaProgramarEArte();
        ImprimirMenu();
        opcao = LerInteiro("Digite uma opção:");
        ImprimirSeparador();

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
        case 9:
            Exercicio9();
            break;
        case 10:
            Exercicio10();
            break;
        case 11:
            Exercicio11();
            break;
        case 12:
            Exercicio12();
            break;
        case 13:
            Exercicio13();
            break;
        case 14:
            Exercicio14();
            break;
        case 15:
            Exercicio15();
            break;
        case 16:
            Exercicio16();
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
