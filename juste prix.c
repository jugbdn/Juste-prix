#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 100, MIN = 1;


int main(int argc, char *argv[])
{
   printf("****LE JUSTE PRIX****\n\n");

    int nombreMystere;
    int choixNombre;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1))+ MIN;

    do
    {
        printf("Conbien coûte cet objet ? ");
        scanf("%d",&choixNombre);

    if (choixNombre == nombreMystere)
    {
        printf("Bravo tu as le juste prix !!\n");
    }
    else if (choixNombre < nombreMystere)
    {
        printf("C'est plus!\n");
    }
    else if (choixNombre > nombreMystere)
    {
        printf("C'est moins!\n");
    }

    }while (choixNombre != nombreMystere);


return 0;

}

