#ifndef EXERCICIOS_METODOS_H
#define EXERCICIOS_METODOS_H

//includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

//definicoes dos metodos
void Exercicio1();
void Exercicio2();
void Exercicio3();
void Exercicio4();
void Exercicio5();
void Exercicio6();
void Exercicio7();
void Exercicio8();


/*
Exercicio1: 
Crie uma função que retorne a área de um triangulo equilátero (em double)
Leia do usuário o valor do lado, faça o cálculo da área e imprima no terminal.
O triangulo equilátero possui 3 lados iguais.*/
void Exercicio1()
{
    /*
    Cálculo do triangulo equilátero é: ((sqrt(3) / 4) * lado * lado);
    sqrt realiza cálculo de raiz quadrada
    exemplo: double raiz = sqrt(25); 
    */    
}

/*Exercicio2: 
Crie uma função que retorne a área de um triangulo isósceles (em double)
Leia do usuário o valor da base e altura, faça o cálculo da área e imprima no terminal.
O triangulo isósceles possui 2 lados iguais.*/
void Exercicio2()
{
    //Seu cálculo é: (base*altura)/2;   
}

/*Exercicio3: 
Crie uma função que retorne a área de um triangulo escaleno (em double)
Leia do usuário o valor dos três lados desse triângulo, faça o cálculo da área e imprima no terminal.
O triangulo escaleno possui os três lados com valores diferentes.*/
void Exercicio3()
{
    /*Seu cálculo é:
    1º achar o semiperímetro s = (a + b + c) / 2;
    2º calcular a área area = sqrt(s * (s - a) * (s - b) * (s - c));
    */
}

/*Exercicio4:
Crie funções para converter kilômetros para milhas por hora.*/
void Exercicio4()
{
    
}

/*Exercicio5:
Escreva uma função que receba um vetor de 10 posições e retorne a média dos elementos.
Crie um vetor com N posições (10 por exemplo), preencha com números aleatórios.
Chame sua função para retornar a média dos valores existentes dentro desse vetor.*/
void Exercicio5()
{
    
}

/*Exercicio6:
Escreva uma função que receba um vetor de 20 posições e duas variaveis de retorno (maior e menor).
Preencha as variáveis com o maior e menor número. Preencha com números aleatórios.*/
void Exercicio6()
{
    
}

/*Exercício7:
Lei os parametros do usuário e calcule a area de um circulo.*/
void Exercicio7()
{
    //Seu calculo é: PI * raio * raio   
    //PI é uma constante 3.14159, você pode criar essa variavel PI global
}

/*Exercício6:
Crie um procedimento que receba uma string (*chr) e retorno essa string ao contrário.
Exemplo: recebeu Programar e retornou ramargorP */
void Exercicio8()
{
    
}




#endif