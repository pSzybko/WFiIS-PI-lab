#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float rand_float (float a, float b){
    return (a + (rand()/(1.0 * RAND_MAX)) *(b-a)); // losowane wartości zmiennoprzecinko
}   


int main(){
    srand(time(NULL));
    float arr[10];
    for(int i=0; i<10; i++){
        arr[i]=rand_float(-100., 100.);
        printf("element[%d] =%6.2f\n", i, arr[i]);
    }
    for(int i=0; i<5; i++){
        float tmp=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=tmp;
    }
    printf("\nPo zamianie:\n\n");
    for(int i=0; i<10; i++){

        printf("element[%d] =%+6.2f\n", i, arr[i]);
    }
    return 0;
}