#include <stdio.h>
#include <Math.h>
main()
{
    float raizinterior;
    float raizfinal;
    float a,b,c,x1,x2;

    printf("ingresa el valor de a");
    scanf("%f",&a);
    printf("ingresa el valor de b");
    scanf("%f",&b);
    printf("ingresa el valor de c");
    scanf("%f",&c);


    raizinterior=(b*b)-(4*a*c);
    raizfinal=sqrt(raizinterior);
    x1=((-b)+raizfinal)/(2*a);

    printf("x1 %f",x1);
    printf("\n");

    raizinterior=(b*b)-(4*a*c);
    raizfinal=sqrt(raizinterior);
    x2=((-b)-raizfinal)/(2*a);

    printf("x2 %f",x2);
    printf("\n");
// Utilize la formula general para hacer mis calculos y leugo al intertar con el codigo verificar que los resultados fueran correctos
}

