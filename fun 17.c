#include <stdio.h>
    int arm(int n){
        int rem=0,sum=0;
        int temp=n;
        while(n>0){
            rem=n%10;
            sum+=rem*rem*rem;
            n=n/10;
        }
        if(sum==temp){
            return 1;
        }
        else{
            return 0;
        }
    }
int main() {
    int n;
    scanf("%d",&n);
    arm(n);
    if(arm(n)==1){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
    return 0;
}