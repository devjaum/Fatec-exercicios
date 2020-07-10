/*
	Name: sistemadelogin.cpp
	Author:Joao Carlos 
	Date: 10/05/2020 17:00
	Description: Função para fazer um sistema de login 
    */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char ExibirLPontuacao(char[]);
char Resultado(char []);
void ExibirTimes(char[12][50]);

//Variavel global;
char TodososTimes [12] [50] = {"1 - Corinthians", "2 - Palmeiras", " 3 - Sao Paulo", "4 - Santos", "5 - Portuguesa", "6 - Guarani", "7 - Juventus", "8 - Barueri", "9 - Sao Caetano", "10 - Oeste", "11 - XV de Piracicaba"};

int main(){
    char resultado[25];
    char resultados2[25];
    int i, j;
        ExibirTimes(TodososTimes);
        printf("\n Digite o numero do time e seu adversario:");
        gets(resultado);
        Resultado(resultado);
        printf("\n Digite o numero de seu adversario:");
        gets(resultados2);
        Resultado(resultados2);
}
void ExibirTimes(char times[12][50]){
    int i;
        puts("Os times sao:");
        for(i = 0; i < 12; i++){
            printf((i < 10)?"%s, ":"%s", times[i], times[i]);
        }
}
char Resultado(char resultado[25]){
    int i, j, decisao;
    decisao = i = 0;
        for(j = 0; j < 12; j++){
            for(i = 0; i < 25; i++){
                if(resultado[i] == TodososTimes[i][j]){
                    decisao=1;
                }
            }
                if(decisao==1){
              ExibirLPontuacao(resultado);  
            }  
        }
    }

char ExibirLPontuacao(char exibir[25]){
    int vitoria, derrota, empate, porc, total, i, j;
    vitoria = derrota = empate = total = 0;
    porc = 100;
        printf("Digite a quantidade de vitorias:");
        scanf("%d", &vitoria);
        printf("Digite a quantidade de empate:");
        scanf("%d", &empate);
        printf("Digite a quantidade de derrota:");
        scanf("%d", &derrota);
        total  = vitoria + derrota + empate;
        vitoria = vitoria / total * porc;
        derrota = derrota / total * porc;
        empate = empate / total * porc;
}