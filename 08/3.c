#include <stdio.h>
#include <stdlib.h>
void razem(int* arr1, int* arr2, int* arr3, int s1, int s2){
    int i=0, j=0;
    while(i<s1 && j<s2){
        if(arr1[i]<arr2[j])
            arr3[i+++j]=arr1[i];
        else arr3[i+j++]=arr2[j];
    }
    if(i<s1)
        while(i<s1)
            arr3[i+++j]=arr1[i];
    else
        while(j<s2)
            arr3[i+j++]=arr2[j];
}
int main(){
    int a[] = {1,12,13,14,22};
    int b[] = {3,4,13,45,54,55,56,66};
    int c[(sizeof(a)+sizeof(b))/sizeof(int)];
    razem(a, b, c, sizeof(a)/sizeof(int), sizeof(b)/sizeof(int));
    for(int i=0; i<sizeof(c)/sizeof(int); i++)
        printf("%d, ", c[i]);
    printf("\n");
    return 0;
}