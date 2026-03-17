#include <stdio.h>
    int dig(int n){
        int count=0;
        while(n>0){
            int rem=n%10;
            count++;
            n=n/10;
        }
        return count;
    }
int main() {
    int n;
    scanf("%d",&n);
    int p=dig(n);
    printf("%d",p);
    return 0;
}