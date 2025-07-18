#include<stdio.h> 
int main() 
{
   int i = 1;
   do 
   {
      printf("10 x %d = %d\n", i, 10 * i); 
      i++; 
   } 
   while(i <= 10); 
   return 0; 
}