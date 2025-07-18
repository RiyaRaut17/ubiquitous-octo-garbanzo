#include<stdio.h>

int main() 
{ int score; printf("\nEnter score of student: "); scanf("%d", &score);

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