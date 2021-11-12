#include <stdio.h>
#include <stdlib.h>

int main(){
    float N1,N2,N3,N4,S,moyane;

    printf("entrer le nombre N1 :");
    scanf("%f",&N1);
    printf("entrer le nombre N2 :");
    scanf("%f",&N2);
    printf("entrer le nombre N3 :");
    scanf("%f",&N3);
    printf("entrer le nombre N4 :");
    scanf("%f",&N4);

      S=N1+N2+N3+N4;
      moyane = S/4;

      printf("la somme : %.2f\n",S);
      printf("la moyane : %.2f\n",moyane);
return 0;
}