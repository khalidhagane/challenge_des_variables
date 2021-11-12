#include <stdio.h>
#include <math.h>

int main(){
float x1,y1,x2,y2,MN;
    printf("entrer les valeurs de point M(x1,y2) est :\n");

printf("entrer la valeur de x1 est : ");
scanf("%f",&x1);

printf("entrer la valeur de y1 est : ");
scanf("%f",&y1);

  printf("entrer les valeurs de point N(x2,y2) est :\n");

printf("entrer la valeur de x2 est : ");
scanf("%f",&x2);

printf("entrer la valeur de y2 est : ");
scanf("%f",&y2);

MN= sqrt(pow(x2-x1,2)+pow(y2+y1,2));
printf("la distance entre M et N est: %.2f",MN);

return 0;
}