#include <stdio.h>

int main(){
    int n,q,rem,sum=0,rem2,w,tot;
    scanf("%d",&n);
    q=n;
    rem=q%100;
    q=q/100;
    w=q;
    while(w!=0){
        rem2=w%10;
        sum=sum*10+rem2;
        w/=10;
    }
    tot=sum*100+rem;
    printf("%d",tot);
}
    
    
    