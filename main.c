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
    Pila mazo,jugador1,jugador2;
    Pila a,b;
    int valor=0;
    int opcion=0;
    int aux;
    char salir;
    int flag=0;
    inicpila(&pilita);
    inicpila(&aux1);
    inicpila(&aux2);
    inicpila(&origen);
    inicpila(&destino);
    inicpila(&distintos);
    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);
    inicpila(&a);
    inicpila(&b);

    printf("\tEjercicio_1\n");
    printf("\tEjercicio_2\n");
    printf("\tEjercicio_3\n");
    printf("\tEjercicio_4\n");
    printf("\tEjercicio_5\n");
    printf("\tEjercicio_6\n");
    printf("\tEjercicio_7\n");
    printf("\tEjercicio_8\n");

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

        while (!pilavacia(&aux1))
        {
            apilar(&destino,desapilar(&aux1));
        }
        printf("*************************************************\n");
        printf("ORIGEN\n");
        mostrar(&origen);

        printf("DESTINO\n");
        mostrar(&destino);

        break;
    case 5:
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

        while(!pilavacia(&origen))
        {
            apilar(&aux1,desapilar(&origen));
        }

        while(!pilavacia(&aux1))
        {
            apilar(&aux2,desapilar(&aux1));
        }

        while (!pilavacia(&aux2))
        {
            apilar(&origen,desapilar(&aux2));
        }
        printf("*************************************************\n");
        printf("ORIGEN\n");
        mostrar(&origen);
        break;
    case 6:
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

        if (!pilavacia(&origen))
        {
            aux=desapilar(&origen);
        }

        while(!pilavacia(&origen))
        {
            apilar(&aux1,desapilar(&origen));
        }

        apilar(&origen,aux);

        while (!pilavacia(&aux1))
        {
            apilar(&origen,desapilar(&aux1));
        }
        printf("ORIGEN\n");
        mostrar(&origen);
        break;
    case 7:
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

        while(!pilavacia(&origen))
        {
            apilar(&aux1,desapilar(&origen));
        }

        if (!pilavacia(&aux1))
        {
            aux=desapilar(&aux1);
        }

        while (!pilavacia(&aux1))
        {
            apilar(&origen,desapilar(&aux1));
        }
        apilar(&origen,aux);

        printf("ORIGEN\n");
        mostrar(&origen);
        break;
    case 8:
        for (int i=0; i<40; i++)
        {
            apilar(&mazo,i+1);
        }
        printf("Mazo: \n");
        mostrar(&mazo);
        while (!pilavacia(&mazo))
        {
            apilar(&jugador1,desapilar(&mazo));
            if (!pilavacia(&mazo))
            {
                apilar(&jugador2,desapilar(&mazo));
            }
        }
        printf("Mazo: \n");
        mostrar(&mazo);
        printf("Jugador1: \n");
        mostrar(&jugador1);
        printf("Jugador2: \n");
        mostrar(&jugador2);
        break;
    case 9:
        do
        {
            printf("Ingrese un valor a la Pila A \n");
            scanf("%i",&valor);
            apilar(&a,valor);
            fflush(stdin);
            printf("Para salir presione la tecla ESC\n");
            salir=getch();
        }
        while(salir!=27);
        do
        {
            printf("Ingrese un valor a la Pila B \n");
            scanf("%i",&valor);
            apilar(&b,valor);
            fflush(stdin);
            printf("Para salir presione la tecla ESC\n");
            salir=getch();
        }
        while(salir!=27);
        printf("Pila A: \n");
        mostrar(&a);
        printf("Pila B: \n");
        mostrar(&b);
        while (!pilavacia(&a)&&!pilavacia(&b))
        {
            apilar(&aux,desapilar(&a));
            apilar(&aux,desapilar(&b));
        }

        if (pilavacia(&a)&&pilavacia(&b))
        {
            printf("La pila A y la pila B tienen la misma cantidad de elementos.\n");
        }
        else if (pilavacia(&a))
        {
            printf("La pila B es mas grande que la pila A. \n");
        }
        else
        {
            printf("La pila A es mas grande que la pila B. \n");

        }
        break;
    case 10:
        do
        {
            printf("Ingrese un valor a la Pila A \n");
            scanf("%i",&valor);
            apilar(&a,valor);
            fflush(stdin);
            printf("Para salir presione la tecla ESC\n");
            salir=getch();
        }
        while(salir!=27);
        do
        {
            printf("Ingrese un valor a la Pila B \n");
            scanf("%i",&valor);
            apilar(&b,valor);
            fflush(stdin);
            printf("Para salir presione la tecla ESC\n");
            salir=getch();
        }
        while(salir!=27);
        printf("Pila A: \n");
        mostrar(&a);
        printf("Pila B: \n");
        mostrar(&b);
        while (!pilavacia(&a)&&!pilavacia(&b)&&flag==0)
        {
            if (tope(&a)==tope(&b))
            {
                apilar(&aux,desapilar(&a));
                apilar(&aux,desapilar(&b));
            }
            else
            {
                flag=1;
            }
        }

        if (pilavacia(&a)&&pilavacia(&b))
        {
            printf("La pila A y la pila B tienen la misma cantidad de elementos, y sus elementos son identicos.\n");
        }
        else if (pilavacia(&a))
        {
            printf("La pila B es mas grande que la pila A. \n");
        }
        else if (pilavacia(&b))
        {
            printf("La pila A es mas grande que la pila B. \n");

        } else
        {
            printf("Las pilas tienen elementos distintos")
        }

        break;
    }


    return 0;
}

