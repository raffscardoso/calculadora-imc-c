#include "funcoes.h"
#include <stdio.h>
#include <string.h>


typedef struct
{
    char nome[30];
    float peso;
    float altura;
    float imc;
    char classificacao[30];
} Pessoa;


void entradaDados(Pessoa pessoas[]){
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite o peso da pessoa %d (kg): ", i + 1);
        scanf("%f", &pessoas[i].peso);
        printf("Digite a altura da pessoa %d (m): ", i + 1);
        scanf("%f", &pessoas[i].altura);
        pessoas[i].imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
        if(pessoas[i].imc < 18.5)
        {
            strcpy(pessoas[i].classificacao, "Abaixo do peso");
        }
        else if(pessoas[i].imc >= 18.5 && pessoas[i].imc < 25)
        {
            strcpy(pessoas[i].classificacao, "Peso normal");
        }
        else if(pessoas[i].imc >= 25 && pessoas[i].imc < 30)
        {
            strcpy(pessoas[i].classificacao, "Sobrepeso");
        }
        else if(pessoas[i].imc >= 30 && pessoas[i].imc < 35)
        {
            strcpy(pessoas[i].classificacao, "Obesidade grau 1");
        }
        else if(pessoas[i].imc >= 35 && pessoas[i].imc < 40)
        {
            strcpy(pessoas[i].classificacao, "Obesidade grau 2");
        }
        else
        {
            strcpy(pessoas[i].classificacao, "Obesidade grau 3");
        }
        printf("\n");
    }
}

void saidaDados(Pessoa pessoas[]){
    for (int i = 0; i < 5; i++)
    {
        printf("\nNome: %s\n", pessoas[i].nome);
        printf("Peso: %.2f\n", pessoas[i].peso);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("IMC: %.2f\n", pessoas[i].imc);
        printf("Classificação: %s\n", pessoas[i].classificacao);
        printf("\n");
    }
}