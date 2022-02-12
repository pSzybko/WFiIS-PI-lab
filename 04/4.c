#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[1000];
    // for(int i=0; i<1000; i++){
    //     arr[i]=rand()%21;
    // }
    // for(int i=0; i<=20; i++){
    //     int tmp=0;
    //     for(int j=0; j<1000; j++)
    //         if(arr[j]==i)
    //             tmp++;
    //     printf("wartosc %d\tprocent wystapien %.2f%\n", i, (double)(tmp)/10);
    // }
    for(int i=0; i<1000; i++){
        arr[i]=rand()%21-10;
    }
    for(int i=-10; i<=10; i++){
        int tmp=0;
        for(int j=0; j<1000; j++)
            if(arr[j]==i)
                tmp++;
        printf("wartosc %d\tprocent wystapien %.2f%\n", i, (double)(tmp)/10);
    }
}