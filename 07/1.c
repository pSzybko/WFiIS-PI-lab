#include <stdio.h>
#include <stdlib.h>

int find(int *tab, int ile, int x){
    if(ile==0) return 0;
    if(tab[ile/2]==x) return 1;
    if(tab[ile/2]>x) return find(tab, ile/2, x);
    if(tab[ile/2]<x) return find(tab+ile/2+1, ile/2, x);
}

int main(){
    int tab_A[] = {1,3,5,6,7,9, 11,13,16,22,25,34,35,36,37,45,46,47,47,47,55,56,58,59};

    if(find(tab_A, sizeof(tab_A)/sizeof(int), 59))
        printf("znaleziono podana liczbe\n");
    else printf("nie znaleziono podanej liczby\n");
}