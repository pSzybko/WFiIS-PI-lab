#include <stdio.h>
#include <stdlib.h>

int rFibonacci(int n, int g){
    static int l;
    static int tabf[100];
    tabf[0]=0;
    tabf[1]=1;
    if(tabf[n]!=0 || n==0){
        printf("%d", g);
        for(int i=0; i<g; i++)
            printf(".");
        tabf[n+1]=tabf[n]+tabf[n-1];
        printf(", Zwracam f(%d), l=%d\n", n, ++l);
        return tabf[n];
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