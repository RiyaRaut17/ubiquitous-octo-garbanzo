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

int main() {
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
