#include <stdio.h>
#include <stdlib.h>

int main(){

float metre , mile ;
printf("entrer la distance en mile :");
scanf("%f",&mile);

metre =(mile/1.609)*1000;

printf("la distance en Mile et la transforme en Metre : %f",metre);


return 0;
}