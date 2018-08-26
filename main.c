#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int a,b,c;
    printf("ingrese dos numeros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    c=sumas(a,b);
    printf("%d",c);
}
