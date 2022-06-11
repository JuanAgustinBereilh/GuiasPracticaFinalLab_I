#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "pila.h"

int main()
{
    printf("Hello Pilas!\n");
    Pila pilita, aux1, aux2;
    Pila origen, destino;
    Pila distintos;
    int valor=0;
    int opcion=0;
    char salir;
    inicpila(&pilita);
    inicpila(&aux1);
    inicpila(&aux2);
    inicpila(&origen);
    inicpila(&destino);
    inicpila(&distintos);

    printf("\tEjercicio_1\n");
    printf("\tEjercicio_2\n");
    printf("\tEjercicio_3\n");
    printf("\tEjercicio_4\n");

    scanf("%i",&opcion);

    switch(opcion)
    {

    case 1:
        for (int i=0; i<5; i++)
        {
            printf("Ingrese un valor ");
            scanf("%i",&valor);
            apilar(&pilita,valor);
        }

        mostrar(&pilita);

        for (int i=0; i<3; i++)
        {
            if (!pilavacia(&pilita))
            {
                apilar(&aux1,desapilar(&pilita));
            }
        }

        while (!pilavacia(&pilita))
        {
            apilar(&aux2,desapilar(&pilita));
        }

        mostrar(&pilita);
        mostrar(&aux1);
        mostrar(&aux2);
        break;
    case 2:

        do
        {
            printf("Ingrese un valor ");
            scanf("%i",&valor);
            apilar(&origen,valor);
            fflush(stdin);
            printf("Para salir presione la tecla ESC\n");
            salir=getch();
        }
        while(salir!=27);

        printf("ORIGEN\n");
        mostrar(&origen);

        printf("DESTINO\n");
        mostrar(&destino);
        while(!pilavacia(&origen))
        {
            apilar(&destino,desapilar(&origen));
        }
        printf("*************************************************\n");
        printf("ORIGEN\n");
        mostrar(&origen);

        printf("DESTINO\n");
        mostrar(&destino);

        break;
    case 3:
        do
        {
            printf("Ingrese un valor.\n");
            scanf("%i",&valor);
            apilar(&pilita,valor);
            fflush(stdin);
            printf("ESC para salir. Otra tecla para continuar.\n");
            salir=getch();

        }
        while (salir!=27);
        printf("Pilita\n");
        mostrar(&pilita);
        printf("Disintos\n");
        mostrar(&distintos);
        while (!pilavacia(&pilita))
        {
            if (tope(&pilita)!=8)
            {
                apilar(&distintos,desapilar(&pilita));
            }
            else
            {
                apilar(&aux1,desapilar(&pilita));
            }
        }
        printf("Pilita\n");
        mostrar(&pilita);
        printf("Disintos\n");
        mostrar(&distintos);
        printf("Aux1\n");
        mostrar(&aux1);
        break;
    case 4:
        do
        {
            printf("Ingrese un valor ");
            scanf("%i",&valor);
            apilar(&origen,valor);
            fflush(stdin);
            printf("Para salir presione la tecla ESC\n");
            salir=getch();
        }
        while(salir!=27);

        printf("ORIGEN\n");
        mostrar(&origen);

        printf("DESTINO\n");
        mostrar(&destino);

        while(!pilavacia(&origen))
        {
            apilar(&aux1,desapilar(&origen));
        }

        while (!pilavacia(&aux1)){
            apilar(&destino,desapilar(&aux1));
        }
        printf("*************************************************\n");
        printf("ORIGEN\n");
        mostrar(&origen);

        printf("DESTINO\n");
        mostrar(&destino);
        break;

    }


    return 0;
}
