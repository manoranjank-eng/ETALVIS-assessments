#include <stdio.h>
int main(){
int n,q,num1,num2,tot;
scanf("%d",&n);
q=n;
num1=q%10;
q=q/10;
num2=q%10;
tot=n-(num1%2 * num2%2)*5;
printf("%d",tot);
}