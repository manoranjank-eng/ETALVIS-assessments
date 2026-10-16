#include<stdio.h>
int main(){
int n,a,sum=0,q,ans,num;
scanf("%d",&n);
num=n;
a=n%100;
while(a!=0){
    q=a%10;
    sum=sum*10+q;
    a/=10;
}
num=num/100;
ans=num*100+sum;
printf("%d",ans);
}