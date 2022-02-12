#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Prosze podac kwote: ");
    int val;
    scanf("%d", &val);
    int a=0, b=0, c=0;
    while(val>=20){
        val-=20;
        a++;
    }
    while(val>=10){
        val-=10;
        b++;
    }
    while(val>=5){
        val-=5;
        c++;
    }
    if(val!=0)
        printf("\nPodana kwota nie może być precyzyjnie rozmieniona!!!\n");
    printf("20x%d\t10x%d\t5x%d\n", a,b,c);
}