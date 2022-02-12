//konieczne biblioteki
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int size = strlen(argv[1])>strlen(argv[2]) ? strlen(argv[1]) : strlen(argv[2]);
    char nap1[size];
    char nap2[size];
    strcpy(nap1, argv[1]); strcpy(nap2, argv[2]);
    printf ("pierwszy: %s %s\n", nap1, nap2); //Jeden dwa
    char tmp[size]; 
    strcpy(tmp, nap1);
    strcpy(nap1, nap2);
    strcpy(nap2, tmp);
    printf ("pierwszy: %s %s\n", nap1, nap2); //dwa Jeden
    return 0;
}