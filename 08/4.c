#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_string_array(char **, int);//wypisywanie tablicy stringow
char* min_string (char **,int); //znajdowanie najmniejszego stringu w tablicy stringow - zwraca wskaznik
int main()
{
    char *strings[] = { "Zorro", "Alex", "Celine", "Bill", "Forest", "Dexter"};
    char *wsk_string;
    size_t strings_len = sizeof(strings)/sizeof(char*); //okreslenie długosci tablicy strings

    print_string_array(strings, strings_len); //wypisanie tablicy

    wsk_string = min_string(strings,strings_len);//znalezienie najmniejszego stringu w tablicy

    printf("%s\n", wsk_string); //wypisanie najmniejszego stringu
    return 0;
}

void print_string_array(char **arr, int size){
    for(int i=0; i<size; i++)
        printf("%s, ", arr[i]);
    printf("\n");
}

char* min_string (char **arr, int size){
    char *min=arr[0];
    for(int i=1; i<size; i++)
        if(strcmp(min, arr[i])>0)
            min=arr[i];
    return min;
}