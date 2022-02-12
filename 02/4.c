#include <stdio.h>
#include <stdlib.h>

int main(){
    float eps;
    printf("Porsze podac dokladnosc: ");
    do{
        scanf("%f",&eps);
    }while(eps<=0 || eps>=1);
    float suma=0.;
    float n=1.;
    while(1/n>=eps)
        suma+=1/n++;
    printf("suma = %f\n", suma);
} 