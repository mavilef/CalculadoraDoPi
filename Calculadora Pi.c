#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    double  nilakantha = 3 , inc2= 0;
    float x = 0;
    int valdigitado = 0;


    printf("Informe a precisão de pi:\n");
    scanf("%i", &valdigitado);

    while(x <= valdigitado){

        nilakantha = nilakantha + inc2 ;
        printf("Nilakantha  -> %.16lf\n",nilakantha);
        //system("cls");

        inc2 = (4/((2*x+2)*(2*x+3)*(2*x+4)))*pow(-1,x);
        x = x+1;


    }


    return 0;
}
