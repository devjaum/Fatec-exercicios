/*
	Name: SistemaCaixaEletronico.cpp
	Author:Joao Carlos 
	Date: 07/07/2020
	Description:Programa para simular um caixa eletronico;
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declarando funções

int decidir(int);
float verificarSaldo(char []);
float depositar(char []);
float saque(char []);
char verificarSenha(int);
char trocarSenha(char []);

//Declarando funções globais;

float saldo[10] = {1000.56,/*0*/ 2556.25,/*1*/ 550.00,/*2*/ 787.00,/*3*/ 9999.95,/*4*/ 
                  150.2,/*5*/ 980.00,/*6*/ 1350.75,/*7*/ 8510.25,/*8*/ 56783.55/*9*/};//Função global do saldo;
char login[10][2] = {"0","1","2","3","4",
                     "5","6","7","8","9"};//Função global de login;
char contatos[10][25] = {"0 - Maria", "1 - Pedro", "2 - Joao", "3 - Zetsu", "4 - Kirito",
                        "5 - Fishcer", "6 - Kasparov", "7 - MikhaelTal", "8 - Mozart", "9 - Motivk"};//Função global que mostra os nomes dos contatos(igual para todos usuarios);
char senha[10][7] = {"000000"/*0*/,"111111"/*1*/,"222222"/*2*/,"333333"/*3*/,"444444"/*4*/,
                     "555555"/*5*/,"666666"/*6*/,"777777"/*7*/,"888888"/*8*/,"999999"/*9*/};//Função global que armazena a senha de cada usuario (sao 6 digitos);
int somenteDeposito[10]    = {0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0};//Função para armazenar se pode fazer outras operações (0), e se só pode fazer deposito(1);

int main(){
    int deci;
    deci = 1;
    do{
        system("cls");//Limpando a tela;
        printf("* * * * * * * * * * * * *\n"
               "*                       *\n"
               "*     1 - Saldo         *\n"
               "*     2 - Saque         *\n"
               "*     3 - Deposito      *\n"
               "*     4 - Trocar senha  *\n"
               "*     0 - Sair          *\n"
               "*                       *\n"
               "* * * * * * * * * * * * *\n");
        printf("De acordo com o menu, digite a operacao desejada:");
        scanf("%d", &deci);//Digitando a operação que o usuario quer;
        fflush(stdin);//Limpar buffer do teclado, para evitar erro no fgets;
        decidir(deci);//Chamando função;
    }while(deci > 0 && deci < 5);//laço de repetição com escolha para sair ou continuar suas transações;
}//Fim do programa;
int decidir(int deci){
    if (deci > 0 && deci < 5){//Se 0 ou maior que 4 sair do programa;
        verificarSenha(deci);
    }   
}//Fim da função
char verificarSenha(int deci){
    char sSenha[7], lLogin[2];
    int i, j, admin;
    i = j = admin = 0;
    

    system ("CLS");//Limpando a tela do usuario;

    printf("Digite seu login:");
    fflush(stdin);//Limpar buffer do teclado, para evitar erro no fgets;
    fgets(lLogin, 2, stdin);//Digitando o login;
    admin = atoi(lLogin);//convertendo string para int;

    for(j = 0; j <= 11; j++){
    if(strcmp (lLogin, login[j]) == 0){//Verificando o login com os dados digitados em "login";
    for(i = 3; i > 0; i--){//If para digitar a senha, se for a senha correta, então levar o usuario para onde ele tinha digitado;
    printf("Digite usa senha:");
    fflush(stdin);//Limpar buffer do teclado, para evitar erro no fgets;
    fgets(sSenha, 7, stdin);//Digitando senha;

    if(strcmp (sSenha, senha[j]) == 0){//Verificando a senha com os dados digitados em "senha";
        if(deci == 1 ){
        return verificarSaldo(lLogin);//Chamando função
    }
        else if(deci == 2){
        return saque(lLogin);//Chamando função
    }
        else if(deci == 3){
        return depositar(lLogin);//Chamando função
    }
        else if(deci == 4){
        return trocarSenha(lLogin);//Chamando função
    }
    }
        else{//informando as tentativas restantes e se caso ultrapassar informar mensagem de falar com gerente;
            printf((i > 1)?"Senha incorreta, %d tentativas restantes\n":"Procure sua agencia e fale com seu gerente, no momento somente deposito\n", i-1);
            if(i==1){
                system("PAUSE");
            }
        }
        if( i == 1){
                   somenteDeposito[admin] = 1;//Se o usuario errou a senha 3 vezes, a conta foi bloqueada;
                }
         }
        }
    }
}//Fim da função
float depositar(char lLogin[2]){
    int i, usuario, admin;
    char decisao[4];
    float valor = 0;
    admin = atoi(lLogin);//convertendo string para int;
    system("CLS");//Limpando a tela

    printf("Digite para quem deseja depositar:\n");
    for (i = 0; i < 10; i++){//Laço para mostrar os contatos dos usuarios (são os mesmo independente do usuario);
            printf("%s\n", contatos[i]);//Mosntrando a lista;
    }
    scanf("%d", &usuario);//Digitando o usuario que deseja depositar;

    puts("Digite o valor:");
    scanf(" %f", &valor);//Valor que quer depositar;

    for(i = 0; i < 10; i++){
        if(i == usuario && saldo[admin] - valor >= 0){//If para calcular o deposito, se for positivo, fazer o calculo;
        saldo[admin] = saldo[admin] - valor;//Alterando o valor que o usuario tem;
        saldo[i] = saldo[i] + valor;//Alterando o valor que o depositado recebeu;

        printf("Deposito feito com sucesso\n");//Informando para o usuario sucesso na transação;
        system("PAUSE");//Pausando o sistema para o usuario identificar o sucesso na transação;
        }
        else if  (saldo[admin] - valor < 0 && i == usuario){//If para calcular o deposito, se for negativo, informar saldo invalido;
            printf("Saldo insuficiente!\n"
                   "Deseja tentar novamente?(sim/nao)");
            fflush(stdin);//Limpar buffer do teclado, para evitar erro no fgets;
            fgets(decisao, 4, stdin);//Digitando o que o usuario decidir, (Se ele quer ou nao tentar depositar novamente);
            if(strcmp(decisao, "Sim") == 0 || strcmp(decisao, "sim") == 0 || strcmp(decisao, "SIM") == 0 ){//Se o usuario digitar sim, entao chamar a mesma função novamente
            depositar(lLogin);//Chamando a função;
            }
        }
    }
   
        system("CLS");//Limpando a tela;
}//Fim da função;
float verificarSaldo(char lLogin[2]){
        int admin = atoi(lLogin);//convertendo string para int;
        if(somenteDeposito[admin] == 0){
           printf("%.2f\n", saldo[admin]);
           return system("PAUSE");//Pausando o sistema para o usuario identificar seu saldo;
        }
        else if(somenteDeposito[admin] > 0){//Se a conta bloqueada;
            printf("Procure sua agencia e fale com seu gerente, no momento somente deposito\n");
            system("PAUSE");
        }
}//Fim da função
float saque(char lLogin[2]){
    float saque = 0;
    int admin = atoi(lLogin);//convertendo string para int;

    if(somenteDeposito[admin] == 0){//Se a conta nao estiver bloqueada, mostrar o saldo;
    printf("SALDO:%.2f\n", saldo[admin]);
    printf("Quanto deseja sacar?\n");
    scanf("%f", &saque);

    }
        if(saldo[admin] - saque >= 0 && somenteDeposito[admin] == 0){//Se a conta nao estiver bloqueada, efetuar o saque;
        return saldo[admin] = saldo[admin] - saque;
    }
        else if (somenteDeposito[admin] == 0){//Se a conta nao estiver bloqueada e o valor do saque for maior que a quantia de dinheiro mostrar insulficiencia;
        printf("Saldo insuficiente\n");
    }
        else{//Se a conta bloqueada;
            printf("Procure sua agencia e fale com seu gerente, no momento somente deposito\n");
            system("PAUSE");
        }
}//Fim da função
char trocarSenha(char lLogin[2]){
    char senhaNova[7], senhaAux[7];
    int admin = atoi(lLogin);//convertendo string para int;

    if(somenteDeposito[admin] == 0){
    printf("Digite a nova senha:");
    fflush(stdin);//Limpar buffer do teclado, para evitar erro no fgets;
    fgets(senhaNova, 7, stdin);//Lendo nova senha;

    printf("Digite novamente:");
    fflush(stdin);//Limpar buffer do teclado, para evitar erro no fgets;
    fgets(senhaAux, 7, stdin);////Lendo nova senha(digitando novamente);

        if(strcmp(senhaNova, senhaAux) == 0){//Comparando as senhas para ver se são iguais (nova senha com digitando novamente);
        strncpy(senha[admin], senhaNova, 7);//Se são iguais a função global do usuario recebe a nova senha;
        printf("Senha alterada com sucesso\n");
        return system("PAUSE");//Pausando o sistema para o usuario identificar que funcionou;
    }
        else{
        printf("Erro, senhas diferentes\n");//Caso as senhas não batem informar que são diferentes;
        return system("PAUSE");//Pausando o sistema para o usuario identificar o que aconteceu;
    }
    }
    else{//Se a conta bloqueada;
        printf("Procure sua agencia e fale com seu gerente, no momento somente deposito\n");
        return system("PAUSE");
    }
}//Fim da função