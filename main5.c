#include <stdio.h>
#include <stdlib.h>
//progrma que pide al usuario su nota y verifica si aprueba o suspende

int main ()
{
    float nota;
    printf("Introduce la nota del alumno \n");
    scanf("%f",&nota);

    if (nota < 5)
    {
        printf("Ha suspendido\n");
    }
    else if(nota == 6)
    {
        printf("Bien\n");
    }
    else if(nota == 7 || nota == 8 )
    {
        printf("Notable\n");
    }
    else if(nota == 9 || nota == 10 )
    {
        printf("Sobresaliente\n");
    }
    else
    {
        printf("Nota introducida no valida \n");

    }
return 0;
}