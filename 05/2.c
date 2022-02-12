#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void show (int *arr, int *h){
    for(int i=SIZE-*h; i<SIZE; i++)
        printf("%d, ", arr[i]);
    printf("\n");
}

void push (int *arr, int n, int *h){
    if(*h>=SIZE)
        return;
    arr[SIZE-(++*h)]=n;
}

int pop (int *arr, int *h){
    int tmp=arr[SIZE-*h];
    arr[SIZE-(*h)--]=0;
    return tmp;
}

int main(){
    int h=0;
    int stack[SIZE]={0};
    for(int i=0; i<10; i++)
        push(stack, i, &h);
    show(stack, &h);
    pop(stack, &h);
    pop(stack, &h);
    pop(stack, &h);
    show(stack, &h);
    return 0;
}

