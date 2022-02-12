#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    int flag=0;
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            if(i!=sqrt(n))
                printf("%d, %d, ", i, n/i);
            else printf( "%d, ", i);
            flag=1;
        }
    }
    printf("\n");
    if(!flag) printf("podana liczba jest pierwsza\n");
    return 0;
}
