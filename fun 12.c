#include <stdio.h>
    int leaf(int n){
        if(n%4==0 && n%100!=0 || n%400==0)
        return 1;
        else
        return 0;
    }
int main() {
    int n;
    scanf("%d",&n);
    int p=leaf(n);
    if(p==1)
    printf("Leap Year");
    else
    printf("Not Leap Year");
    return 0;
}