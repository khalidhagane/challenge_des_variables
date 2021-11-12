#include <stdio.h>
#include <stdlib.h>

int main(){

    float r,c;
   const float p=3.14;

    printf("entrer le rayane est :");
    scanf("%f",&r),

    c= 2*p*r;
    printf("la circonférence du cercle est : %.2f",c);

return 0;
}