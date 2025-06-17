#include<stdio.h>
int main()
{
int i,rem;
for(i=0; i<=20; i++)
{
 rem=i%2;
 if(rem==0);
 
 printf("%d \n", i);
} 
return 0;
}



#include<stdio.h>

int main()
{
    int num1,num2,sum;
    printf("\nenter num1\t");
    scanf("%d",&num1);
    printf("\nenter num2\t");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("The sum of is %d",sum);
    return 0;
}


#include<stdio.h>
int main ()
{
    int a,b,c,sum;
    float avg;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("sum is %d\n",sum);
    printf("avg is %.2f\n",avg);
    return 0 ;
}


#include<stdio.h>

int main() 
{
    int score;
    printf("\nEnter score of student: ");
    scanf("%d", &score);
    
    if (score > 100 || score < 0) {
        printf("Enter a valid score");
    } else if (score >= 80) {
        printf("A grade");
    } else if (score >= 70) {
        printf("B grade");
    } else if (score >= 60) {
        printf("C grade");
    } else if (score >= 50) {
        printf("D grade");
    } else if (score >= 40) {
        printf("E grade");
    } else {
        printf("FAIL");
    }

    return 0;      
}


#include<stdio.h>
int main()
{
    int number;
    printf("enter the number\t");
    scanf("%d",&number);
    if(number>>3)
       {
          printf ("\nnumber is greater            than 3\t");
       }
       printf("\nend of the programme");
    return 0;
}    




#include<stdio.h>

int main()
 {
    int a,b,c;
  
  printf("Enter num1 = ");
  scanf("%d", &a);

  printf("Enter num2 = ");
  scanf("%d", &b);

  printf("Initially value of a is %d\n", a);
  printf("Initially value of b is %d\n", b);

  c=a;
  a=b;
  b=c;

  printf("Interchange the value of a in %d\n", a);
  printf("Interchange the value of b in %d\n", b);
      
      
    
    return 0;
 }




#include<stdio.h>
int main()
{
int num1=22, num2=14, sum;
sum=num1+num2;
printf("The sum of %d and %d is %d", num1, num2, sum);
return 0;
}




#include<stdio.h>
int main()
{
int i, num=2, table;
for(i=1; i<=10; i++)
{
 table=num*i;
 printf("%d \n", table);
} 
return 0;
}



#include<stdio.h>
int main()
{
int marks;
printf("Enter marks:\t");
scanf("%d",&marks);
if(marks>=40)
 {
   printf("PASS");
 }
else  
 {
   printf("FAIL");
 }  
return 0;
}


#include <stdio.h>

int main()
{

float bs, da, hr, gs;

printf("Enter Basic Salary of Ramesh:\t");
scanf("%f", & bs);

da = (0.4)*bs;
printf ("\n The Dearness Allowance is %f:\t",da);

hr = (0.2)*bs;
printf ("\n The House Rent Allowance is %f:\t",hr);

gs=(bs+da+hr);
printf (" \n The Cross Salary of Ramesh is %f:\t",gs);

return 0;
}



#include<stdio.h>

int main()
{
    printf("Hello world!");
    return 0;
}





#include <stdio.h>
int main() {
    float basic, da, hra, gross;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic);
    da = 0.4 * basic;
    hra = 0.2 * basic;
    gross = basic + da + hra;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}





#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("10 x %d = %d\n", i, 10 * i);
        i++;
    } while(i <= 10);
    return 0;
}







#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", a, b);
    for(i = 2; i < n; i++) {
        next = a + b;
        printf("%d\n ", next);
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}