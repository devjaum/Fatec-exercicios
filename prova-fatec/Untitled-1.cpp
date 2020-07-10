/*
    Name: Rodizio.c
    Author: Gabriel Miller
    Date: 09/06/20 12:34
    Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

const char Dias[5][15] = {
    "Segunda-feira.",
    "Terça-feira.",
    "Quarta-feira.",
    "Quinta-feira.",
    "Sexta-feira.",
};

char placa[8];
int hora, DiaRodizio;

//Sessão de prototipação.
void VerificarDia(int);
void VerificarHora();
int Multar();

int main(void){

    setlocale(LC_ALL, "Portuguese");
    int i;

    printf("  *Digite o dia da semana     \n\n");
    for (i =0; i < 5; i++) {
        printf("- Digite %i para %s \n", i, Dias[i]);
    }
    scanf(" %i", &DiaRodizio);

    printf("\nDigite a hora: ");
    scanf(" %i", &hora);

    printf("\nDigite a placa do veículo (Sem o traço): ");
    scanf(" %s", &placa);

    VerificaDia(DiaRodizio); 
}

void VerificaHorario() {

    if ((hora >= 7 && hora <=10)  (hora >= 17 && hora <=20)) {
        printf("\nVocê sera multado em R$ 139,16 por circular em dia e horario de rodizio\n");
    } else {
       printf("\nDentro das leis de transito.");
    }
}

void VerificaDia(int dia) {
 
    if(dia == 0 && (placa[6] == '1'  placa[6] == '2')) {
        VerificaHorario(); 

    } else if (dia == 1 && (placa[6] == '3'  placa[6] == '4')) {
        VerificaHorario();

    } else if (dia == 2 && (placa[6] == '5'  placa[6] == '6')) {
        VerificaHorario();

    } else if (dia == 3 && (placa[6] == '7'  placa[6] == '8')) {
        VerificaHorario();

    } if (dia == 4 && (placa[6] == '9'  placa[6] == '0')) {
        VerificaHorario();
    } else {
        printf("obedeca as leis de transito");
    }
}