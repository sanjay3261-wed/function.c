#include <stdio.h>
int  nut(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    int p=nut(n);
    printf("%d",p);
    return 0;
}