#ifndef EXERCICIOS_REVISAO_H
#define EXERCICIOS_REVISAO_H
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


void Exercicio1();
void Exercicio2();
void Exercicio3();
void Exercicio4();
void Exercicio5();
void Exercicio6();
void Exercicio7();
void Exercicio8();
void Exercicio9();
void Exercicio10();
void Exercicio11();
void Exercicio12();
void Exercicio13();
void Exercicio14();
void Exercicio15();
void Exercicio16();

/*Exercício 1: Verificar número digitado
Escreva um programa que peça ao usuário para inserir um número.
O programa deve verificar se o número é par, impar ou nulo
Imprimir a mensagem correspondente.*/
void Exercicio1()
{
    int numero = 0;
    printf("Digite um número:");
    scanf("%d", &numero);

    if (numero == 0)
    {
        printf("O número digitado é nulo.\n");
    }
    else
    {
        if (numero % 2 == 0)
        {
            printf("O número digitado é par.\n");
        }
        else
        {
            printf("O número digitado é ímpar.\n");
        }
    }
}

/*Exercício 2: Calculadora simples
Crie um programa que leia dois números e uma operação (+, -, *, /)
use estruturas condicionais para calcular e exibir o resultado da operação.*/
void Exercicio2()
{
   
}

/*Exercício 3: Maior de três números
Escreva um programa que leia três números e use if para determinar
qual é o maior número entre eles.*/
void Exercicio3()
{
    
}

/*Exercício 4: Maior ou igual a 18
Escreva um programa que peça a idade de uma pessoa e, usando
o operador ternário, verifique se ela é maior ou igual a 18 anos (maioridade).*/
void Exercicio4()
{
   
}

/*Exercício 5: Desconto em produto
Crie um programa que peça o preço de um produto.
Se o preço for maior que 100, aplique um desconto de 10% usando o operador ternário.
Caso contrário, não aplique o desconto.*/
void Exercicio5()
{
    
}

/*
Exercício 6: Dias da semana
Escreva um programa que peça ao usuário um número de 1 a 7 e exiba o nome correspondente
do dia da semana (1 para segunda-feira, 2 para terça-feira, etc.) usando switch.
*/
void Exercicio6()
{
    
}

/*Exercício 7: Estações do ano
Escreva um programa que leia um número de 1 a 4 e exiba a estação do ano correspondente 
(1 para verão, 2 para outono, 3 para inverno, 4 para primavera) usando switch.
*/
void Exercicio7()
{
    
}

/*Exercício 8: Tabuada
Crie um programa que peça ao usuário um número e imprima a tabuada 
desse número de 1 a 10 usando um laço for.
*/
void Exercicio8()
{
    
}

/*
Exercício 9: Somatório de números
Escreva um programa que peça ao usuário um número e, usando um for, 
calcule a soma de todos os números de 1 até o número fornecido.
*/
void Exercicio9()
{
    
}

/*Exercício 10: Números ímpares entre valores que o usuario escolher, exemplo (1 e 100)
Crie um programa que use um laço for para imprimir todos os números ímpares entre 1 e 100.*/
void Exercicio10()
{
    
}

/*Exercício 11: Contagem regressiva
Escreva um programa que use um laço while para fazer uma contagem 
regressiva de 10 a 0 e, ao final, exiba "Fogo!".*/
void Exercicio11()
{
    
}

/*Exercício 12: Adivinhação de número
Escreva um programa que escolhe um número aleatório entre 1 e 100 
(use uma variável com um valor fixo) e peça ao usuário para adivinhar o número. 
O laço while deve continuar até que o usuário adivinhe o número correto.*/
void Exercicio12()
{
    
}

/*Exercício 13: Entrada de números positivos
Crie um programa que peça ao usuário para inserir números e some-os. 
O laço deve continuar até que o usuário insira um número negativo, 
momento em que o programa deve exibir a soma total dos números positivos inseridos.*/
void Exercicio13()
{
      
}

/*Exercício 14: Repetir até o usuário acertar
Peça ao usuário para adivinhar um número entre 1 e 10. 
O programa deve continuar pedindo até que o número correto seja adivinhado, usando um laço do-while.*/
void Exercicio14()
{
    
}

/*Exercício 15: Validação de senha
Crie um programa que peça ao usuário uma senha. 
O programa deve continuar pedindo a senha até que o usuário 
insira a senha correta (por exemplo, "1234").*/
void Exercicio15()
{
    
}

/*Exercício 16: Menu interativo
Escreva um programa que exiba um menu com opções de 1 a 3 e peça ao usuário para escolher uma opção.
O menu deve ser exibido repetidamente até que o usuário escolha a opção 3 (sair).
*/
void Exercicio16()
{
    
}



#endif
