#include <stdio.h>
#include <stdlib.h>

int main(){

float metre , mile ;
printf("entrer la distance en metre :");
scanf("%f",&metre);

mile =metre/(1000*1.609);

printf("la distance en Mile et la transforme en Metre : %f",mile);

    return 0;
}