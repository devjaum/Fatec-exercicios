/*
	Name: Vetor.cpp
	Author:Joao Carlos 
	Date: 10/05/2020 15:00
	Description: Função para imprimir o Vetor em ordem inversa de preenchimento
*/
#include <stdio.h>
#include <stdlib.h>

int ordemInversa (int vetor[], int);//Função para imprimir o vetor em ordem inversa;

main(){
    int vetor[10], i, n;
    n = 0;//Variavel para teste rapido;

    for(i = 0; i < 10; i++){//Preenchendo um vetor com valores;
        //vetor[i] = (i*n++); //Teste rapido;
        printf("Digite um valor:\n");
         scanf("%d", &vetor[i]);//Lendo os valores digitados no vetor;
    }

    puts("Valores do vetor:");

    for(i = 0; i < 10; i++){//Mostrando os valores do vetor em ordem digitada;
        printf("\n%d", vetor[i]);
    }

    ordemInversa(vetor, i);//Mostrando os valores do vetor em ordem inversa de preenchimento;

    system ("\nPAUSE");//Comando para Pausar o programa no cmd;
}

int ordemInversa (int vetor[], int n){
    int i;

    printf("\nImprimindo os valores na ordem inversa...\n");
    
    for(i = 9; i >= 0; i--){
        printf("%d\n", vetor[i]);//Imprimindo os valores do vetor em ordem inversa de preenchimento;
    }
}