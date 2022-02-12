#include <ctype.h>
#include <stdio.h>

int main(void){
    char str[]="PozDrO BenC";
    char* ptr=str;
    printf("Lancuch oryginalny: a->%s\n",str);
    while(*ptr!='\0'){
        *ptr=tolower(*ptr);
        ptr++;
    }
    printf("Lancuch zmieniony: a->%s\n",str);
    return 0;
}