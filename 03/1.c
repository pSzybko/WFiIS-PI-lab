#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

int main(){
    srand(time(NULL));

    int n1[SIZE], n2[SIZE], n3[SIZE+1]={0}, r=0;

    for(int i=0; i<SIZE; i++){
        n1[i]=rand()%10;
        n2[i]=rand()%10;
    }
    for(int i=SIZE-1; i>=0; i--){
        n3[i+1]=(n1[i]+n2[i]+r)%10;
        if(n3[i+1]!=(n1[i]+n2[i]+r))
            r=1;
        else r=0;
    }
    n3[0]=r;
    printf(" ");
    for(int i=0; i<SIZE; i++)
        printf("%d",n1[i]);
    printf("\n+");
    for(int i=0; i<SIZE; i++)
        printf("%d",n2[i]);
    printf("\n");
    for(int i=0; i<SIZE+1; i++)
        printf("%d",n3[i]);
    printf("\n");
}