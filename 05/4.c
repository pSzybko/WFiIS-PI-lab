#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *where(int* arr, int size){
    int a=-99;
    int *ptr=&a;
    for(int i=0; i<size; i++)
        if((*(arr+i))%2==0 && *(arr+i)>*ptr)
            *ptr=*(arr+i);
    return ptr;
}

int main(){
    srand(time(NULL));
    int tab1[5], tab2[11], tab3[15];
    for(int i=0; i<5; i++){
        *(tab1+i)=rand()%21-10;
        printf("%d, ", *(tab1+i));
    }
    printf("\n");
    printf("najwiekszy element:\t%p\t%d\n", where(tab1, 5), *where(tab1,5));
    for(int i=0; i<11; i++){
        *(tab2+i)=rand()%21-10;
        printf("%d, ", *(tab2+i));
    }
    printf("\n");
    printf("najwiekszy element:\t%p\t%d\n", where(tab2, 11), *where(tab2,11));
    for(int i=0; i<15; i++){
        *(tab3+i)=rand()%21-10;
        printf("%d, ", *(tab3+i));
    }
    printf("\n");
    printf("najwiekszy element:\t%p\t%d\n", where(tab3, 15), *where(tab3,15));
    printf("\n");
    (*where(tab1,5)>*where(tab2,11)) ? ((*where(tab1,5)>*where(tab3,11)) ? printf("najwiekszy element:\ttablica 1\tadres: %p\twartosc: %d", where(tab1,5), *where(tab1,5)) : printf("najwiekszy element:\ttablica 3\tadres: %p\twartosc: %d", where(tab3,15), *where(tab3,15))) : ((*where(tab2,11)>*where(tab3,15) ? printf("najwiekszy element:\ttablica 2\tadres: %p\twartosc: %d", where(tab2,11), *where(tab2,11)) : printf("najwiekszy element:\ttablica 3\tadres: %p\twartosc: %d", where(tab3,15), *where(tab3,15))));
    printf("\n");
}