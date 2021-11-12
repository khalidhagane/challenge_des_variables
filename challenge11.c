#include <stdio.h>
#include <stdlib.h>

int main(){
    float longueur, largeur ,rectangle;

    printf("entrer la longueur est :  ");
    scanf("%f",&longueur);

    printf("entrer la largeur est :  ");
    scanf("%f",&largeur);

    rectangle= 2*(longueur + largeur);

printf("la circonference d'un rectangle est : %.2f",rectangle);
return 0;
}