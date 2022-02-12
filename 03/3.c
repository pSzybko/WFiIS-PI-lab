#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *strrev(char *str){
    char c, *front, *back;
    if(!str || !*str)
        return str;
    for(front=str,back=str+strlen(str)-1;front < back;front++,back--){
        c=*front;*front=*back;*back=c;
    }
    return str;
}

int main(){
    char liczba[9]; //konwertujemy liczby z zakresu ?
    int numer = 11, tmp;
    liczba[8]='\0';
    for(int i=7; i>=0; i--){
        tmp=numer>>i;
        if(tmp & 1) liczba[7-i]='1';
        else liczba[7-i]='0';
    }
    printf ("liczba %d zapis binarny %s\n", numer,liczba); //liczba 11 zapis
}