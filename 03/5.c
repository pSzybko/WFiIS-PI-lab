#include <stdio.h>
int bitcount(int x){
    int b=0;
    do{
        if(x&1) b++;
        x=x>>1;
    }while(x);
    return b;
}
int main ()
{
    int wynik, liczba = 19; // 10011
    wynik = bitcount(liczba);
    printf("Liczba %d ma bitow ustawionych na 1: %d \n",liczba, wynik);
    getchar();
    return 0;
}