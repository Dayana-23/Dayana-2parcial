#include<stdio.h>
main(){
float calif;
float prom1;
float prom2;
float prom3;
float prom4;

printf("Ingresa el promedio de mate:\n");
scanf ("%f",&prom1);

printf("Ingresa el promedio de ingles:\n");
scanf ("%f",&prom2);

printf("Ingresa el promedio de etica:\n");
scanf ("%f",&prom3);

printf("Ingresa el promedio de met:\n");
scanf("%f",&prom4);

calif=(prom1+prom2+prom3+prom4)/4;
if(calif > 6){
printf("Aprobado");
}else{
printf("Reprobado");

\\ como bien dije anteriormente me base en  uno de los trabajos anteriores y solo cambie algunos detalles  como dividirlo entre 4 y si es mayor a 6 aprueba 
}
}


