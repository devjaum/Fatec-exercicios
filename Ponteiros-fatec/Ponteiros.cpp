/*
	Name: Ponteiros.cpp
	Author:Joao Carlos 
	Date: 09/07/2020
	Description:Fazendo multiplos de 2 sem multiplicar, apenas com ponteiros;
*/
#include <stdio.h>
#include <stdlib.h>

int multiplos2(int* p, int, int);//Função para ver os multiplos de 2 de acordo com o que o usuario digitar;

int main(){
    int *p, x, l;
    p = &l;//P apontando para o endereço da variavel;
    l = 1;//Variavel recebendo 1;

    printf("Digita uma quantidade queira ver os multiplos de 2\n");
    scanf(" %d", &x);//Lendo o que o usuario digitar;
    multiplos2(p,x,l);//Chamando a função;

}//Fim do programa;
int multiplos2(int *p, int x, int l){
    int **p2, vet[x], i;

    for(i = 0; i < x; i ++){//For para calcular os multiplos sem multiplicar;
        p2 = &p;//Ponteiro está apontando para o outro ponteiro;
        l = l + *p;//Variavel recebendo a soma do endereço dela mesma;
        p = &l;//Ponteiro apontando para a variavel;
        printf("%d, ", **p2);//Exibindo o valor apontado para o ponteiro que está apontado para o endereço da variavel;
        vet[i] = **p2;//Guardando o resultado;
    }
    printf("\nDigite qual elemento quer ver da sequencia\n");
    scanf(" %d", &i);//Lendo o que o usuario digitar
    printf("2%c%d = %d", 94, i, vet[i]);//Exibindo o valor de acordo com o elemento digitado (("%c", 94)utilizei , porque o setlocale não estava indo; 

}//Fim da função;