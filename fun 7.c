#include<stdio.h>
int prime(int n){
    int facts=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int p=prime(n);
    if(p==0){
        printf("prime");
    }
    else{
    printf("Not prime");
}
}