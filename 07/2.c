#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, l=0, m=1;
    printf("Podaj liczbe dla ktorej obliczymy n-ty wyraz ciagu Fibonacciego: ");
    do{
    scanf("%d", &n);
    }while(n<0);
    for(int i=0; i<n; i++){
        m=l+m;
        l=m-l;
    }
    printf("wynik: %d\n", l);
}