#include <stdio.h>
#include <stdlib.h>

int main(){
float f , c ;
    printf("entrer la temperature en Fahrenheit : ");
    scanf("%f",&f);

 c = (f - 32) * 5/9;
    printf("la transforme en degre Celsius est : %.2f\n",c);

 if(c<=0){
    printf("tres froid");
    }
 else if(c <= 26 &&  c > 0){
    printf("froid");
    }
 else if(c>25 && c<=70){
    printf("chaud");
    }
 else
    printf("tres chaud");

return 0;
}
