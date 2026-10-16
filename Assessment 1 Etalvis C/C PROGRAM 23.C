#include <stdio.h>
int main(){
    int n,q,sum,mid,rem;
  scanf("%d", &n);
  q = n;
  rem=q%10;
q=q/10;
mid=q%10;
sum=(q-mid)*10+rem;
printf("%d",sum);
}