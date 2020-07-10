/*
	Name: Q3.cpp
	Author:Joao Carlos 
	Date: 09/06/2020 10:35
	Description: Programa que vai ler dois numeros inteiros e negativos, fazendo o maior chegar
    no menor utilizando uma função de recursividade direta;
*/ 

//Bibliotecas;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//Prototipação
int maiorNumero(int, int);//Função para igualar os valores;

int main(){
    int numero1, numero2;
    numero1 = numero2 = 0;
        printf("Digite dois numeros:\n");
        scanf("%d", &numero1);//Digite o 1 numero;
        scanf("%d", &numero2);//Digite o 2 numero;
        maiorNumero(numero1, numero2);//Função para igualar os valores;
}
int maiorNumero(int numero1, int numero2){
    if (numero1 > numero2){//Se o numero1 for maior que o numero2, vai chamar a função novamente até se igualar;
       printf("%d eh maior que %d\n", numero1, numero2);
       maiorNumero(--numero1, numero2);//Chama a função dentro da função;
    }
    else if (numero2 > numero1){//Se o numero2 for maior que o numero1, vai chamar a função novamente até se igualar;
       printf("%d eh maior que %d\n", numero2, numero1);
        maiorNumero(numero1, --numero2);//Chama a função dentro da função;
    }
    else if (numero1 == numero2){//Se os valores forem iguais, mostrar e sair da função;
        printf("Os numeros estao iguais:%d, %d", numero1, numero2);
    }
    
}