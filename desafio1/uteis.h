#ifndef UTEIS_H
#define UTEIS_H
#include<stdio.h>
#include<string.h>

enum diasSemana
    {
        Domingo = 1,
        Segunda = 2,
        Terca = 3,
        Quarta = 4,
        Quinta = 5,
        Sexta = 6,
        Sabado = 7
    };

enum estacoesDoAno {
    Verao = 1,
    Outono = 2,
    Inverno = 3,
    Primavera = 4
};   


void QuebraDeLinha();
void ImprimirSeparador();
void ImprimaProgramarEArte();
float LerFloat(const char* mensagem);
int LerInteiro(const char* mensagem);
float CalcularIMC(const float peso, const float altura);
void TestePonteiro(const int a, const int b, int *c);





void QuebraDeLinha()
{
    printf("\n");
}

void ImprimirSeparador()
{
    printf("------------------------------------\n");
}

void ImprimaProgramarEArte()
{    
    printf("-------Programar é Arte!-------\n"); 
}

float LerFloat(const char* mensagem)
{
    float value;
    printf("%s\n",mensagem);
    scanf("%f",&value);
    return value;
}

int LerInteiro(const char* mensagem)
{
    int value;
    printf("%s\n",mensagem);
    scanf("%d",&value);
    return value;
}

float CalcularIMC(const float peso, const float altura)
{    
    float imc = peso/(altura*altura);
    return imc;
}

void TestePonteiro(const int a, const int b, int *c)
{
    *c = a+b;
}


#endif
