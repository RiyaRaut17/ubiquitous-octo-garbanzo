#include <stdio.h>
 int main() 
{ int n, i = 1, fact = 1; printf("Enter a number: "); scanf("%d", &n); while(i <= n) { fact *= i; i++; } printf("Factorial = %d\n", fact); return 0; }#include<stdio.h> int main() { int i,rem; for(i=0; i<=20; i++) { rem=i%2; if(rem==0);

printf("%d \n", i); 
} 
return 0; 
}