#include <stdio.h>

int main(){
    int n=0;
    for(int i=-5; i<99; i++){
        if(i%4==0 && i%5!=0){
            printf("%d, ", i);
            n++;
        }
    }
    printf("\n%d\n", n);
}