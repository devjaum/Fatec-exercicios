/*
	Name: potencia.cpp
	Author:Joao Carlos 
	Date: 10/05/2020 12:00
	Description: Função de potencia
*/ 
#include <stdlib.h>
#include <stdio.h>

int Potencia(int, int);//Função para fazer a potencia;

main(){
    int Base, Expoente;
    Base = Expoente = 0;

        printf("Digite o valor da base: ");
        scanf("%d", &Base);

        printf("Digite o valor do expoente: ");
        scanf("%d", &Expoente);

        Potencia(Base, Expoente);//Função para fazer a potencia e imprimir a mesma;

        system ("\nPAUSE");//Comando para Pausar o programa no cmd;
}

int Potencia(int base, int expoente){
    int i, aux, total;
    total = 0;
    i = expoente;
    aux = base;

        if(base < 0){//If's para reduzir os possiveis erros na potenciação
            aux= aux *-1;
        }
        else if(expoente == 1){//If's para reduzir os possiveis erros na potenciação
            printf("O numero %d elevado a %d eh igual a %d\n", base, expoente, base);
        }
        else if(expoente == 0 && base > 0){//If's para reduzir os possiveis erros na potenciação
            ("O numero %d elevado a %d eh igual a 1\n", base, expoente);
        }

        while(i > 1){//Calculo da potencia;
            i--;
            aux = base * aux;
            total = aux;
        }  

          if(i <= 1 && expoente != 1){//Imprimindo a sequencia com um if para reduzir erros;
               printf("O numero %d elevado a %d eh igual a %d\n", base, expoente, total);
          }
    }
