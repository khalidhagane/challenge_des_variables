#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    float s,d,c,div,m ;
printf("entrer le nombre a  :");
scanf("%d",&a);

printf("entrer le nombre b  :");
scanf("%d",&b);

s= a+b;
d=a-b;
m=a*b;
c=a%b;

printf("%d + %d = %.2f\n",a,b,s);
printf("%d - %d = %.2f\n",a,b,d);
printf("%d x %d = %.2f\n",a,b,m);
printf("%d %% %d = %.2f\n",a,b,c);

if(b!=0){
    div=a/b;
    printf("%d / %d = %.2f\n",a,b,div);
}
else{
printf("la division par 0 est imposible !");
}
return 0;
}