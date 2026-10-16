#include <stdio.h>

int main(){
    int n,q,rem,sum=0;
    scanf("%d",&n);
    q=n;
    while(q!=0){
        rem=q%10;
        sum=sum+rem;
        q/=10;
    }
    printf("%d",sum);
}