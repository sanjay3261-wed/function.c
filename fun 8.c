#include <stdio.h>
int rev(int n){
     int rem,revs=0;
    while(n>0){
        rem=n%10;
        revs=revs*10+rem;
        n=n/10;
    }
    return revs;
}
int main() {
    int n;
    scanf("%d",&n);
    int p=rev(n);
    printf("%d",p);
    return 0;
}