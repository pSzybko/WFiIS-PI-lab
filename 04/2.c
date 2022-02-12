#include <stdio.h>
#include <stdlib.h>

float suma(float *poczatek, int n){
    float tmp=0.;
    for(int i=0; i<n; i++)
        tmp+=poczatek[i];
    return tmp;
}

float iloczyn(float *poczatek, float *koniec){
    float tmp=1.;
    while(poczatek!=koniec)
        tmp*=*poczatek++;
    tmp*=*koniec;
    return tmp;
}

int main(){
    float arr[100];
    for(int i=0; i<100; i++){
        arr[i]=-1.+0.03*i;
    }
    printf("wzsystkie elementy suma = %f, iloczyn = %f\n", suma(arr, 100), iloczyn(arr, arr+99));
    for(int i=0; i<10; i++){
        printf("elementy od %d do %d suma = %f, iloczyn = %f\n", 10*i, 9+10*i, suma(arr+i*10, 10), iloczyn(arr+i*10, arr+i*10+9));
    }
}