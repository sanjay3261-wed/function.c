#include <stdio.h>
int fab(int n){
    int a=0,b=1,sum=0;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    fab(n);
    return 0;
}