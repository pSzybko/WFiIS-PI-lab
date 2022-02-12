#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    char s=*argv[3];

    switch(s){
        case '+':
        printf("%d + %d = %d\n", a, b, a+b);
        break;
        case '-':
        printf("%d - %d = %d\n", a, b, a-b);
        break;
        case '*':
        printf("%d * %d = %d\n", a, b, a*b);
        break;
        case '/':
        if(b!=0)
            printf("%d / %d = %d\n", a, b, a/b);
        else printf("niepoprawne dane\n");
        break;
        case '%':
        if(b!=0)
            printf("%d %% %d = %d\n", a, b, a%b);
        else printf("niepoprawne dane\n");
        break;
        default:
        printf("niepoprawne dane\n");
    }
}