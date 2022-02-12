#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    do{
        printf("Podaj cyfre: ");
        scanf("%d", &n);
    }while(n>9 || n<0);
    for(int i=0; i<n+1; i++){
        int tmp=n;
        for(int j=n-i; j>0; j--)
            printf(" ");
        for(int j=0; j<=i; j++)
            printf("%d", tmp--);
        printf(" ");
        for(int j=0; j<n-i; j++)
            printf("%d", tmp--);
        printf("\n");
    }
    return 0;
}