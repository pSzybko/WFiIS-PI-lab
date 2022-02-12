#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    char *ptr=NULL;
    char losuj_wyraz[11];
    losuj_wyraz[10]='\0';
    char losowa=rand()%26+97;
    for(int i=0; i<10; i++)
        losuj_wyraz[i]=rand()%26+97;
    printf("litera %c\tlancuch %s\n", losowa, losuj_wyraz);
    if(ptr=strchr(losuj_wyraz, losowa)){
        printf("Pierwsze wystapienie - index %d\n", ptr-losuj_wyraz);
        int licznik=0;
        while(ptr!=NULL && ptr+1!=NULL){
            ptr=strchr(ptr+1, losowa);
            licznik++;
        }
        printf("litera %c wystepuje w lancuchu %s %d razy\n", losowa, losuj_wyraz, licznik);
    }
    else printf("litera %c nie wystepuje w lancuchu %s\n", losowa, losuj_wyraz);
    
}