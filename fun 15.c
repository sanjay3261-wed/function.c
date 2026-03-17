#include <stdio.h>
    int multi(int n){
        for(int i=1;i<=10;i++){
            printf("%d*%d=%d ",i,n,n*i);
        }
    }
int main() {
    int n;
    scanf("%d",&n);
    multi(n);
    return 0;
}