#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int* arr, int size){
    int m=0, n=size-1;
    while(m<n){
        while(arr[m]==0 && m<n) m++;
        while(arr[n]==1 && m<n) n--;
        if(m<n){
            swap(arr+m, arr+n);
            m++; n--;
        }
    }
}


int main(){
    int tab[]={1,3,4,614,13,22,1};
    for(int i=0; i<sizeof(tab)/sizeof(int); i++)
        printf("%d, ", tab[i]);
    printf("\n");
    sort(tab, sizeof(tab)/sizeof(int));
    for(int i=0; i<sizeof(tab)/sizeof(int); i++)
        printf("%d, ", tab[i]);
    printf("\n");
}