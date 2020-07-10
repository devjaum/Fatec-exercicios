#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char TesteUniversal (char[3]);
char Universal[3][3] = {"ab", "ac", "op"};

int main(){
    char teste[3];
        gets(teste);
        TesteUniversal(teste);
}
char TesteUniversal (char teste[3]){
    int i;
    for(i = 0; Universal == '\0'; i++){
        if(teste[i]==Universal[i]){
        puts("a");
        }
    }
}