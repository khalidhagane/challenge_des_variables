#include <stdio.h>
#include <stdlib.h>

int main(){

    char nom[10],prenom[15],sexe[10],tele[20];
    int age;

printf("entrer le nom est :\n");
scanf("%s",&nom);

printf("entrer le prenom est :\n");
scanf("%s",&prenom);

printf("entrer le sexe est :\n");
scanf("%s",&sexe);

printf("entrer l'age est :\n" );
scanf("%d",&age);

printf("entrer le num telephone est :\n");
scanf("%s",&tele);

printf("nom : %s\n",nom);
printf("prenom : %s\n",prenom);
printf("sexe : %s\n",sexe);
printf("age : %d\n",age);
printf("num telephone : %s\n",tele);
/*printf("les informations personnelle :\n");
printf("nom: %s  prenom: %s sexe: %s l'age: %s  num telephone: %d",nom,prenom,sexe,age,tele);*/

return 0;
}