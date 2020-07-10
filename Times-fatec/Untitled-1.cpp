#include <conio.h>
#include <stdio.h>


  int main ()
{
    int num,cont,cont1,cont2,cont3,cont4,cont5,cont6,somaT;
        num = cont = cont1 = cont2 = cont3 = cont4 = cont5 = cont6 = 0;
float i1,i2,i3,i4,i5,i6;

    i1 = 0.0; i2 = 0.0; i3  = 0.0; i4 = 0.0;i5 = 0.0; i6 = 0.0;


do {
    printf("digite o numero que o dado caiu:");
    scanf("%d",&num);



    {//inicio if contagem de quantas vezes cairam
        if(num ==1)
        (cont1 = cont1+1, printf("\n%d", cont1));
        else if (num == 2)
        (cont2 = cont2+1, printf("\n%d", cont2));
        else if(num ==3)
        (cont3 = cont3+1, printf("\n%d", cont3));
        else if(num ==4)
        (cont4 = cont4+1, printf("\n%d", cont4));
        else if(num == 5)
        (cont5 = cont5+1, printf("\n%d", cont5));
        else if(num==6)
        (cont6 = cont6+1, printf("\n%d", cont6));
    }//fim if de contagme de quantoas vezes cairamem cada face

} while(num ==1||num ==2||num==3||num==4||num==5||num==6);

    somaT = cont1+cont2+cont3+cont4+cont5+cont6;
    printf("\n%d", somaT);


    i1 = cont1/somaT*100;

        i2 = cont2/somaT*100;

            i3 = (cont3*100)/somaT;

                i4 = (cont4*100)/somaT;

                    i5 = (cont5*100)/somaT;

                        i6 = (cont6*100)/somaT;



    printf("\nA quantidade total de giros foi %d",somaT);
printf("\na porcentagem que o numero 1 rodou e de : %.f", i1);
        printf("\na porcentagem que o numero 2 rodou e de : %.f", i2);
            printf("\na porcentagem que o numero 3 rodou e de : %.f", i3);
                printf("\na porcentagem que o numero 4 rodou e de : %.f", i4);
                    printf("\na porcentagem que o numero 5 rodou e de : %.f", i5);
                        printf("\na porcentagem que o numero 6 rodou e de : %.f", i6);

}