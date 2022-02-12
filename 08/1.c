#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[]="Jak sie nie ma, co sie lubi, to sie lubi, co sie ma.";
    char str2[]="sie";
    char str3[strlen(str)+1];
    char *ptr=str;
    char *ptr2=strstr(str, str2)-1;
    strncpy(str3, str, ptr2-ptr);
    str3[ptr2-ptr]='\0';
    ptr2=ptr2+strlen(str2)-1;
    ptr=ptr2;
    while(ptr2=strstr(ptr2, str2)){
        strncat(str3, ptr, ptr2-ptr);
        ptr2+=strlen(str2);
        ptr=ptr2;
    }
    strcat(str3, ptr);
    printf("%s\n", str3);
}