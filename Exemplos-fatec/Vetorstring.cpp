/*
	Name: Vetorstring.cpp
	Author:Joao Carlos 
	Date: 19/05/2020
	Description: Carregar um vetor string e ser manipulado por uma função;
*/

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Sessão de prototipação
void imprimirVetorTexto(char [7][4]);
main(){
    char dias[7] [4] = {"Seg", "Ter", "Qua", "Qui", "Sex", "Sab", "Dom"};
    puts("Vetor carregado...");
    imprimirVetorTexto(dias);

}

void imprimirVetorTexto(char semana[7][4]){
    for (int i = 0; i < 7; i++){
        printf((i < 6)?"%s, ":"%s", semana[i]);//Printf junto com IF sendo q o ? é o "if" e o : "else";
    }
}