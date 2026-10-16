#include <stdio.h>

int main(){
int n, q, sum = 0, tot = 11, rem;
 scanf("%d", &n);
 q = n;

 while (tot > 10){
 while (q != 0){
    rem = q % 10;
     sum = sum + rem;
    q = q / 10;
        }
  if (sum < 10){
 printf("%d\n", sum);
      tot = sum;
        }
 else {
  q = sum;
 sum = 0;
 }
 }
}