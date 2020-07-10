/*
	Name: Fibonacci.cpp
	Author:Joao Carlos 
	Date: 07/07/2020
	Description:Fazendo a sequencia Fibonacci com função recursiva;
*/
#include<stdio.h>
#include<stdlib.h>
//Função recursiva
int Fibonacci (int, int[]);

// Variaveis para trabalhar na função recursiva;
int aux;
int x = 1;
int cont = 0;

int main (){
    int fibo;

    printf("Digite a quantidade de numeros da sequencia Fibonacci que deve aparecer:");
    scanf("%d", &fibo);//Quantidades de elementos da sequencia Fibonacci;

    int vet[fibo];//Variavel para consultar um certo elemento da sequencia;
    Fibonacci(fibo,vet);//Chamando a função recursiva;
    
system("PAUSE");
}
int Fibonacci(int fibo, int vet[]){
    int sequencia;

    if(x < 0){//Se o valor for muito alto (Normalmente é representado como -12...) informará o erro;
            system("cls");
            return puts("Numero muito alto, invalido!");
            
        }

    if(cont < fibo){//Calculo e exibição da sequencia Fibonacci;
        vet[cont] = x;
        printf((cont < fibo - 1)?"%d, ":"%d\n", vet[cont], vet[cont]);//Exibição agradavel com if ternario;
        x = x + aux;//Calculo Fibonacci;
        aux = x - aux;//Calculo Fibonacci;
    }

    cont++;//Contador para o vetor;

     if (cont > fibo){//If para exibir o elemento digitado pelo usuario;
        printf("\nDigite qual elemento gostaria de ver da sequencia, exemplo(1,1,2,3,5,8 (6 = 8))\n"
            "Digite 0 ou maior que os elemntos para sair\n");
        scanf("%d", &sequencia);

            if(sequencia > 0 && sequencia <= fibo){//Exibindo o elemento do numero digitado, se menor que 0 ou maior que a quantidade de elementos
            //sairá do "laço";
                sequencia--;
                printf("O elemento eh:%d", vet[sequencia]);
                //Exibindo o elemento desejado;
            }
            else{
                return 0;//Saindo da função
            }
    }

    Fibonacci(fibo, vet);//Chamando a função recursiva

}