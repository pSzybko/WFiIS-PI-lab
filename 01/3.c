#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min=999;
    int max=0;
    int sum;
    for(int i=0; i<20; i++){
        int tmp=rand()%168+118;
        sum+=tmp;
        if(min>tmp) min=tmp;
        if(max<tmp) max=tmp;
    }
    sum/=20;
    printf("srednia = %d, min = %d, max = %d\n", sum, min, max);
}