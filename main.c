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
    Pila menor;
    int valor=0;
    int opcion=0;
    int aux;
    char salir;
    int flag=0;
    int suma=0;
    int cantidad=0;
    float promedio;
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
    inicpila(&menor);
    for (int i=1; i<22; i++)
    {
        printf("\tEjercicio_%i\n",i);
    }

    srand(time(NULL));
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
            apilar(&aux1,desapilar(&a));
            apilar(&aux1,desapilar(&b));
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
        while (!pilavacia(&a)&&!pilavacia(&b))
        {
            if (tope(&a)!=tope(&b))
            {
                flag=1;
            }
            apilar(&aux1,desapilar(&a));
            apilar(&aux1,desapilar(&b));
        }
        if (pilavacia(&a)&&pilavacia(&b))
        {
            if (flag==0)
            {
                printf("La pila A y la pila B tienen la misma cantidad de elementos, y sus elementos son identicos.\n");
            }
            else
            {
                printf("La pila A y la pila B tienen la misma cantidad de elementos, pero sus elementos son distintos.\n");
            }
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
    case 11:
        //11. Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los
        //elementos que sean iguales al tope de la pila MODELO.
        break;
    case 12:
        //12. Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los
        //elementos que existan en MODELO.
        break;
    case 13:
        //13. Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores
        //o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.
        break;
    case 14:
        //14. Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope
        //de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)
        break;
    case 17:
        //17. Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos
        //elementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algún valor 5”
        break;
    case 18://ej1 pilas avanzadas
        for(int i=0; i<15; i++)
        {

            apilar(&pilita,rand()%13+1);
        }
        mostrar(&pilita);
        while(!pilavacia(&pilita))
        {
            suma=suma+tope(&pilita);
            apilar(&aux1,desapilar(&pilita));
        }
        printf("Suma: %i",suma);
        mostrar(&pilita);
        break;
    case 19://ej2 pilas avanzadas
        for(int i=0; i<20; i++)
        {
            apilar(&pilita,rand()%13+1);
        }
        mostrar(&pilita);
        while(!pilavacia(&pilita))
        {
            cantidad++;
            apilar(&aux1,desapilar(&pilita));
        }
        printf("Camtidad de elementos: %i",cantidad);
        mostrar(&pilita);
        break;
    case 20://ej3 pilas avanzadas
        for(int i=0; i<30; i++)
        {
            apilar(&pilita,rand()%13+1);
        }
        mostrar(&pilita);
        while(!pilavacia(&pilita))
        {
            suma=suma+tope(&pilita);
            cantidad++;
            apilar(&aux1,desapilar(&pilita));
        }
        promedio=(float) suma/cantidad;
        if (cantidad!=0)
        {
            printf("Suma: %i\n",suma);
            printf("Cantidad de elementos: %i\n",cantidad);
            printf("El promedio de los valores de la pila es: %0.2f",promedio);
            mostrar(&pilita);
        }
        break;
    case 21://ej4 pilas avanzadas
        for(int i=0; i<10; i++)
        {
            apilar(&pilita,rand()%99+1);
        }
        mostrar(&pilita);

        if (!pilavacia(&pilita))
        {
            apilar(&menor,tope(&pilita));
            while(!pilavacia(&pilita))
            {
                if (tope(&menor)>tope(&pilita))
                {
                    apilar(&menor,tope(&pilita));
                }
                apilar(&aux1,desapilar(&pilita));
            }
        }
        printf("El menor valor de la pila es: %i",tope(&menor));
        while(!pilavacia(&aux1))
        {
            apilar(&pilita,desapilar(&aux1));
        }
        mostrar(&pilita);
        break;
    case 22://ej5 pilas avanzadas

        break;
    }
    return 0;
}

