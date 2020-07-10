#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a funçao strcmp
#include<windows.h>
#include<conio.h>

main(){

       char c;
       char login[20];
       char senha[20];
       int a=10;
       int i=0;
       int verifica_senha=0;
      while(verifica_senha==0){
       printf("\n\t\tWINDOWS\n\n login: ");
       //fflush(stdin);  //Limpando o buffer do teclado
       gets(login);
       printf("\n senha: ");
       while((c=getch())!=13){ //13 é o valor de ENTER na tabela ASCII
           senha[i]=c;
           i++;
           printf("*");      //imprime o * Anterisco
           }
          senha[i]='\0';
          i=0;
       system("cls");
       a= strcmp(senha,"Chacal"); //
       if(a==0){printf("SENHA CORRETA");system("color 0a");verifica_senha=1;Beep(1500,2000);}
           else{printf("%s SENHA ERRADA\n",senha);system("color 0c");Beep(1200,200);}
       printf("\n");

       }
       system("pause");
       return 0;
}