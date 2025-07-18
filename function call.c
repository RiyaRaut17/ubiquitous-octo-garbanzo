#include<stdio.h>

int main() { int a,b; printf("enter a\t"); scanf("%d",&a); printf("enter b\t"); scanf("%d",&b);

printf("the sum is %d",sum(a,b));
return 0 ;
} int sum (int x,int y)

{

int c;
c=x+y;
return c;
}