#include <stdio.h>
 int main() 
{ 
float num1, num2; char op; 
printf("Enter an operator (+, -, , /): "); scanf(" %c", &op);
 printf("Enter two numbers: ");
 scanf("%f %f", &num1, &num2);
switch(op) 
{ case '+': 
printf("Result = %.2f\n", num1 + num2);
 break;
 case '-': 
printf("Result = %.2f\n", num1 - num2); 
break; 
case '': 
printf("Result = %.2f\n", num1 * num2);
 break;
 case '/': 
if (num2 != 0) 
printf("Result = %.2f\n", num1 / num2); 
else
 printf("Division by zero error!\n");
 break;
 default: 
printf("Invalid operator\n");
 } 
return 0; }