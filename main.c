#include <stdio.h>
#include <stdlib.h>
char letra1 = 160; //á
char letra2 = 130; //é
char letra3 = 161; //í
char letra4 = 162; //ó
char letra5 = 163; //ú
char nombre[30];
char respuesta[30];
char error1[30];
int main()
{
    printf("Hola, bienvenidos a ElMill%cn, una competici%cn que se basa en las capacidades intelectuales de cada individuo\n Vamos a empezar con el cl%csico pasapalabra, como bien es conocido, se ir%cn haciendo preguntas y la respuesta de cada una de ellas empezar%c con la letra que le corresponda\n",letra4, letra4, letra1, letra1, letra1);
    printf("Como te llamas: \n ");
    gets(nombre);
    printf("Empezamos entonces %s:\n Con la letra A: \n Mueble con puertas y estantes o perchas para guardar perchas y otros objetos.\n",nombre);
    gets(respuesta);
    if(strcmp(respuesta,"armario")==0){
        printf("Correcto, siguiente pregunta.");
    }
    else{
         if (strcmp(respuesta,"pasapalabra")==0){
            printf("De acuerdo, siguiente pregunta.");
         }
         else {
                printf("No era esa la respuesta, pasamos.");
         }
    }
    return 0;
}
