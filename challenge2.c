#include <stdio.h>
#include <stdlib.h>

int main(){

float f , c ;
 printf("entrer la temperature en Fahrenheit : ");
 scanf("%f",&f);
 
 c = (f - 32) * 5/9;
 printf("la transforme en degré Celsius est : %.2f",c);


return 0;
}