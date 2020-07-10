/* Funcao para ler uma string e comparar as inicias com uma matriz universal*/
#include <conio.h>
#include <stdio.h>
#include <string.h>

char ImprimirUniversal (char [3]);
char LerUniversal(char [3]);
char Universal [6] [3] = {"ab", "bc", "cd", "de","pa", "ef"};

main(){
   char ler[3];
puts("Digite as iniciais:");
scanf("%s", &ler);
LerUniversal(ler);

}

char LerUniversal(char ler [3]){
   int i, j,x;
   x=0;
for(i = 0; i < 2; i++){
	if(x==1){
		ImprimirUniversal (ler);}
  for(j = 0; j <=100; j++){
  if(ler[i] == Universal[i][j]){
x=1;}    
    else{
    }
    }
  }
}
char ImprimirUniversal (char ler[3]){
	int i;
	printf("A letra eh:");
	      for(i=0;i<2;i++){
	       printf ("%c", ler[i]);
	      }
}
