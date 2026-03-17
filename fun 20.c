#include <stdio.h>
    int sw(int a,int b,char op){
        switch(op){
            case '+':
            printf("%d",a+b);
            break;
            case '-':
            printf("%d",a-b);
            break;
            case '*':
            printf("%d",a*b);
            break;
            case '/':
            printf("%d",a/b);
            break;
            default:
            printf("Invalid Input");
            break;
        }
    }
int main() {
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    sw(a,b,op);
    return 0;
}