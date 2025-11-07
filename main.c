/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
float calif;
float prom1;
float prom2;
float prom3;
float prom4;


printf(" ingresa el promedio de mate");
scanf ("%f", &prom1);


printf(" ingresa el promedio de frances");
scanf ("%f" , &prom2);


printf(" ingresa el promedio de etica");
scanf ("%f", &prom3);

printf(" ingresa el promedio de ingles");
scanf ("%f", &prom4);

calif=(prom1+prom2+prom3+prom4)/4;
if(calif > 6 ){
    printf ("APROVADO");
   }else{
       printf ("reprovado");
}









}