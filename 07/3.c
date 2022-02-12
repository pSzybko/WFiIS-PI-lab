#include <stdio.h>
#include <stdlib.h>

int rFibonacci(int n, int g){
    static int l;
    if(n==0 || n==1){
        printf("%d", g);
        for(int i=0; i<g; i++)
            printf(".");
        printf(", Zwracam f(%d), l=%d\n", n, ++l);
        return n;
    }
    printf("%d", g);
    for(int i=0; i<g; i++)
        printf(".");
    printf(", Obliczam f(%d)=f(%d)+f(%d), l=%d\n", n, n-1, n-2, ++l);
    return rFibonacci(n-1, g+1)+rFibonacci(n-2, g+1);
}

int main(){
    int n;
    printf("Podaj liczbe dla ktorej obliczymy n-ty wyraz ciagu Fibonacciego: ");
    do{
    scanf("%d", &n);
    }while(n<0);
    printf("rFibonacci (%d) = %d\n", n, rFibonacci(n, 0));
}