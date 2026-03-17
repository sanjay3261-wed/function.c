#include <stdio.h>
    int power(int a,int b){
        int temp=1;
        for(int i=1;i<=b;i++){
            temp=temp*a;
        }
        return temp;
    }
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    power(a,b);
    printf("%d",power(a,b));
    return 0;
}