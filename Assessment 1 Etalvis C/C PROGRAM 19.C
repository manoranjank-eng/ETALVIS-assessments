#include<stdio.h>
int main(){
int n,sum,q,tot;
scanf("%d",&n);
q=n;
q=q/10;
sum=q%10;
tot=n-(sum%2)*5;
printf("%d",tot);
}