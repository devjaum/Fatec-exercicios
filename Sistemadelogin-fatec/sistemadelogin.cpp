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

char validarLogin (char[], char[]);//Função para validar o acesso e chamar a função senha;
char validarSenha (char[], char[]);//Função para validar a senha;

//Variaveis globais e estasticas;
const char user[6] = "admin";
const char userSenha[6] = "admin";

main(){
    char senha[50], login[50];
   
        printf("Digite seu login:"); 
        gets(login);//Lendo os valores digitados do login;
    
        printf("Digite sua senha:");
        gets(senha);//Lendo os valores digitados da senha;
 
        validarLogin(login, senha);//Função para validar o acesso;

        system ("\nPAUSE");//Comando para Pausar o programa no cmd;
}
char validarLogin (char login[50], char senha[50]){

    int i;
        for(i = 0;i < 6; i++){
            if (login[i] != user[i]){//Verificar letra por letra, caso alguma seja diferente, informar a falha;
               printf("Usuario incorreto ou senha incorreta\n");
              // validarLogin(login, senha);
            }
        }
        validarSenha(senha, login);//Se o login estiver correto, chamar a função para validar a senha;
}
char validarSenha (char senha[50], char login[50]){
    int i;
        for(i = 0; i < 6; i++){
            if(senha[i] != userSenha[i]){//Verificar letra por letra, caso alguma seja diferente, informar a falha;
                return printf("Usuario incorreto ou senha incorreta\n");
            }
        }
    puts("Login feito com sucesso\n");//Mensagem de login feito;
}