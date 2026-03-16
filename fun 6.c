#include<stdio.h>
int fact(int n){
    int facts=1;
    for(int i=n;i>0;i--){
        facts=facts*i;
    }
    return facts;
}
int main(){
    int n;
    scanf("%d",&n);
    int p=fact(n);
    printf("%d",p);
}