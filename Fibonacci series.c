#include<stdio.h> 
int main() 
{
   int n, a = 0, b = 1, next, i; 
   printf("Enter number of terms: ");  
   scanf("%d", &n); printf("Fibonacci Series:  %d %d ", a, b);
   for(i = 2; i < n; i++)
  { 
     next = a + b; 
     printf("%d\n ", next); 
     a = b;
     b = next; 
  } 
  printf("\n"); 
  return 0; 
}