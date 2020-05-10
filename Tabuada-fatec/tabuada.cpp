/*
	Name: tabuada.cpp
	Author:Joao Carlos 
	Date: 10/05/2020 13:00
	Description: Função para fazer a tabuada
*/
#include <stdlib.h>
#include <stdio.h>

int Multiplicar (int);//Função para fazer a multiplicação e subsequência imprimindo a tabuada;

main(){
    int Numero = 0;
    
        printf("Digite um numero para ver sua tabuada de multiplicacao: ");
        scanf("%d", &Numero);

        Multiplicar(Numero);//Função que faz a tabuada do numero digitado;

        system ("\nPAUSE");//Comando para pausar o cmd;
}
int Multiplicar (int numero){//Função para fazer a multiplicação e subsequência imprimindo a tabuada;
   int i, total;
   total = 0;

        for(i = 0; i <= 10 ; i++){//Responsavel por multiplicar e mostrar a tabuada do numero digitado;
            total= numero*i;
            printf("%d X %d = %d\n", numero, i, total);
        }

}