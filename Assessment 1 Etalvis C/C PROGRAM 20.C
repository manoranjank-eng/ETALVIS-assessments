#include<stdio.h>
int main(){
int n,num1,num2,tot,sum,q;
scanf("%d",&n);
q=n;
num1=q%10;
q=q/10;
num2=q%10;
sum=num1+num2;
tot=n-(sum%2)*5;
printf("%d",tot);
}