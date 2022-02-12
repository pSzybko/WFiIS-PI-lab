#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int h=0;

void show (int *);

void push (int *, int);

int pop (int *);

int main(){
    int stack[SIZE]={0};
    for(int i=0; i<10; i++)
        push(stack, i);
    show(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    show(stack);
    return 0;
}

void show (int *arr){
    for(int i=SIZE-h; i<SIZE; i++)
        printf("%d, ", arr[i]);
    printf("\n");
}

void push (int *arr, int n){
    if(h>=SIZE)
        return;
    arr[SIZE-(++h)]=n;
}

int pop (int *arr){
    int tmp=arr[SIZE-h];
    arr[SIZE-h--]=0;
    return tmp;
}