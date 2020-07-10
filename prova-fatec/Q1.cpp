/*
	Name: Q1.cpp
	Author:Joao Carlos 
	Date: 09/06/2020 10:01
	Description: Exibir numeros impares, pares, e gerar vetor maior que 10;
*/ 
//Bibliotecas;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//Prototipação;
void exibirVetorImpar(int [10]);//Função para imprimir um vetor com os numeros impar;
void exibirVetorPar(int [10]);//Função para imprimir um vetor com os numeros par;
void criarExibirVetor(int [10]);//Criar e exibir um vetor com numeros maior que 10;

int main(){
    int i, numero[10], decisao;
    decisao = 1;
    puts("Digite 10 numeros em sequencia:");
        for(i = 0; i < 10; i++){//Armazenando os 10 numeros;
            scanf("%d", &numero[i]);
        }
        do{ 
            
            printf("Digite 1 para imprimir os impar\nDigite 2 para imprimir os par\nDigite 3 para criar um novo vetor e imprimir somente os maiores que 10\nDigite 0 para sair\n");   
            scanf("%d", &decisao);
            if(decisao == 1){
            exibirVetorImpar(numero);//Chamando a função para imprimir os impares;
            }
            else if (decisao == 2){
            exibirVetorPar(numero);//Chamando a função para imprimir os pares;
            }
            else if (decisao == 3){
            criarExibirVetor(numero);//Chamando a função para criar um novo vetor e imprimir o mesmo somente com numeros maiores que 10;
            }
            else if (decisao == 0){
                decisao = 0;
            }
        }while(decisao != 0);
}

void exibirVetorImpar(int numero[10]){
    int total, i, x;
    total = i = x = 0;
        for(i = 0; i < 10; i++){//Impar;
            x = numero[i]/2;
            total = numero[i]-(x*2);//Conta para ver se o numero é impar ou par;
            if(total != 0){//Se for diferente de 0 entao é impar;
                printf("%d eh impar\n", numero[i]);//Imprimindo os numeros Impares;
            }
        }
}
void exibirVetorPar(int numero[10]){     
    int total, i, x;   
    total = i = x = 0;
            for(i = 0; i < 10; i++){//Par;
            x = numero[i]/2;
            total = numero[i]-(x*2);//Conta para ver se o numero é impar ou par;
            if(total == 0){//Se for igual a 0 entao é par;
                printf("%d eh par\n", numero[i]);//Imprimindo os numeros pares;
            }
        }
    }
void criarExibirVetor(int numero[10]){
    int i = 0;
            for(i = 0; i < 10; i++){//Novo Vetor;
            printf("Digite um numero:");
            scanf("%d", &numero[i]);//Armazenando os dados no vetor;
            }
            printf("Os numeros maiores que 10 sao:\n");
            for(i = 0; i < 10; i++){
            if(numero[i] > 10){//Se for maior que 10 entao imprima;
                printf("%d \n", numero[i]);//Imprimindo o vetor com os numeros maiores que 10;
            }
            
        }
    }//Fim do programa;