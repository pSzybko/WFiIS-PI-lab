#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int konwersja(char* str){
    float wynik=0.;
    for(int i=0; i<strlen(str); i++){
        wynik+= (str[i]=='1') ? pow(2, strlen(str)-i-1) : 0.;
    }
    return wynik;
}

int main(){
    char *wbin = "01001001";
    printf ("%d\n", konwersja(wbin)); //zostanie wypisana wartość 73
}