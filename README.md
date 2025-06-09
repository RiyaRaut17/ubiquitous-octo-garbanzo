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