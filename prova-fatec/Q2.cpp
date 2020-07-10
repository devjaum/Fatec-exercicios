/*
	Name: Q2.cpp
	Author:Joao Carlos 
	Date: 09/06/2020 11:30
	Description: Multa por dirigir em seus dias errados;
*/ 
//Bibliotecas;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototipação
void verificarPlaca(char [4], int [4], char [4], int);
void diaDaSemanaPermitido(char [4], int [4], char [4], int);
void horarioPermitido(int);
int multa();
char dias [5] [4]= {"Seg", "Ter", "Qua", "Qui", "Sex"};

int main(){
    char dia[4], placa1[4];
    int placa2[4], hora, i;
    printf("Digite as 3 primeiras letras da placa:");
    gets(placa1);
    printf("Digite os 4 ultimos digitos da placa:");
    for(i = 0; i < 4; i++){
        scanf("%d", &placa2[i]);
    }
    printf("Digite as 3 primeiras letras do dia da semana:");
    for(i = 0; i < 3; i++){
        scanf(" %c", &dia[i]);
    }
    printf("Digite a hora:");
    scanf("%d", &hora);
    verificarPlaca(placa1, placa2, dia, hora);
}
void verificarPlaca(char placa1[4], int placa2[4], char dia[4], int hora){
    if(placa2[3]==1||placa2[3]==2){
        diaDaSemanaPermitido(placa1, placa2, dia, hora);}
    else if(placa2[3]==3||placa2[3]==4){
        diaDaSemanaPermitido(placa1, placa2, dia, hora);}
    else if(placa2[3]==5||placa2[3]==6){
        diaDaSemanaPermitido(placa1, placa2, dia, hora);}
    else if(placa2[3]==7||placa2[3]==8){
        diaDaSemanaPermitido(placa1, placa2, dia, hora);}
    else if(placa2[3]==9||placa2[3]==0){
        diaDaSemanaPermitido(placa1, placa2, dia, hora);}
}
void diaDaSemanaPermitido(char placa1[4], int placa2[4], char dia[4], int hora){
    int i;
        for(i = 0; i < 4; i++){
            if(dia[i] == dias[1][i]){
                horarioPermitido(hora);
            }
        }
}
void horarioPermitido(int hora){
    if (hora > 6 && hora < 11){
        multa();
    }
    else if(hora > 16 && hora < 21){
        multa();
    }
}
int multa(){
    printf("Multa a pagar de 139.16");
}
///Observação não consegui fazer essa questão;