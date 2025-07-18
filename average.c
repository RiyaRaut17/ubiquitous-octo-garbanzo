#include<stdio.h> 
int main () 
{ int a,b,c,sum; float avg; printf("enter a"); scanf("%d",&a); printf("enter b"); scanf("%d",&b); printf("enter c"); scanf("%d",&c); sum=a+b+c; avg=sum/3; printf("sum is %d\n",sum);
 printf("avg is %.2f\n",avg); 
return 0 ; 
}