#include<stdio.h>
int largest(int a,int b){
    if(a>=b)
    return a;
    else
    return b;
}
int main(){
    int a,b;
    float result;
    scanf("%d%d",&a,&b);
    printf("%d",largest(a,b));
}