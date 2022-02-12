#include <stdio.h>
#include <stdlib.h>

void zamien (int* , int*);
void odwroc (int*, int);

int main(){
    int a, b, i;
    int tab[] = {3,5,4,7,23,4,5,34,23,1,2,1,6,9};
    int d = sizeof(tab)/sizeof(int);//dlugosc tablicy tab
    a = 12;
    b = 45;
    printf("a = %d, b = %d \n", a, b);//wypisanie wartości zmiennych a oraz b - wynik : a = 12, b = 45
    zamien (&a, &b); //wywołanie procedury zamieniajacej wartości dwóch zmienneych
    printf("a = %d, b = %d \n", a, b);//wypisanie wartości zmiennych a oraz b - wynik : a = 45, b = 12
    for (i =0; i < d; i++)//wypisanie tablicy tab
        printf ("tab[%d] = %d\n", i, tab[i]);

    odwroc(tab, d);
    for (i =0; i < d; i++)//wypisanie tablicy tab po odwroconeniu
    printf ("tab[%d] = %d\n", i, tab[i]);
    return 0;
}
void zamien (int *a, int *b) {
    int tmp=*a;
    *a=*b;
    *b=tmp;
    return;
}

void odwroc (int *arr, int n){
    for(int i=0; i<n/2; i++)
        zamien(arr+i, arr+n-i-1);
}