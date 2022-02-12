#include <stdio.h>
#include <stdlib.h>

int main(){
    char n;
    printf("Podaj duza litere: ");
    do{
    scanf("%c", &n);
    }while(n<64 || n>91);

    for(int i=0; i<=n-'A'; i++){
        char tmp='A';
        for(int j=0; j<i; j++)
            printf(" ");
        for(int j=i; j<=n-'A'; j++)
            printf("%c", tmp++);
        tmp--;
        for(int j=i; j<n-'A'; j++)
            printf("%c", --tmp);
        printf("\n");
    }
    return 0;
}