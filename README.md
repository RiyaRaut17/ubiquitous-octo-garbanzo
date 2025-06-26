#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int low, high, mid;

    // Input size of array
    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d sorted integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to search
    printf("Enter number to search: ");
    scanf("%d", &key);

    // Binary Search
    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Number found at position %d\n", mid + 1);
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If not found
    if(low > high) {
        printf("Number not found in the array.\n");
    }

    return 0;
}



#include<stdio.h>

int main()
{
    int a,b;
    printf("enter a\t");
    scanf("%d",&a);
    printf("enter b\t");
    scanf("%d",&b);
    
    printf("the sum is %d",sum(a,b));
    return 0 ;
}
int sum (int x,int y)

{   

    int c;
    c=x+y;
    return c;
}



#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Size of the pattern (must be odd for symmetry)

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            // Print star on diagonals only
            if(j == i || j == (n - i + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int i, j;
    int n = 3; // Controls the height of the middle row

    // Top half including middle row
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++)
            printf("  "); // Print leading spaces

        for(j = 1; j <= i; j++)
            printf("%d   ", i); // Print number with space

        printf("\n");
    }

    // Bottom half
    for(i = n + 1; i <= 2 * n - 1; i++) {
        for(j = 1; j <= i - n; j++)
            printf("  "); // Print leading spaces

        for(j = 1; j <= 2 * n - i; j++)
            printf("%d   ", i); // Print number with space

        printf("\n");
    }

    return 0;
}





#include <stdio.h>

char board[3][3]; // 3x3 board

// Function to initialize the board
void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// Function to display the board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2)
            printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check for a win
char checkWinner() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return ' '; // No winner yet
}

// Main function
int main() {
    int row, col, moves = 0;
    char player = 'X'; // X starts

    initializeBoard();

    while (1) {
        displayBoard();
        printf("Player %c, enter your move (row and column 1-3): ", player);
        scanf("%d %d", &row, &col);

        row--; col--; // Convert to 0-index

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ')
         {
            board[row][col] = player;
            moves++;

            // Check for winner
            char winner = checkWinner();
            if (winner == 'X' || winner == 'O') {
                displayBoard();
                printf("Player %c wins! 🎉\n", winner);
                break;
         }

            // Check for draw
            if (moves == 9) 
            {
                displayBoard();
                printf("It's a draw!\n");
                break;
            }

            // Switch player
            player = (player == 'X') ? 'O' : 'X';
        } 
        else 
        {
            printf("Invalid move. Try again.\n");
        }
    }

    return 0;
}




#include <stdio.h>

int main() {
    int i;

    // Loop from 1 to 9
    for(i = 1; i < 10; i++) 
    {
        
        // Check if i is equal to 5
        if(i == 5) 
        {
            
            switch(i)
             {
                 break;
             }
        } 
        else
        {
            // Print all other numbers
            printf("Number: %d\n", i);
        }
    }

    return 0;
}


#include <stdio.h>
int main() {
    int n, i = 1, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n) {
        fact *= i;
        i++;
    }
    printf("Factorial = %d\n", fact);
    return 0;
}#include<stdio.h>
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





#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d is larger\n%d is smaller\n", a, b);
    else if (b > a)
        printf("%d is larger\n%d is smaller\n", b, a);
    else
        printf("Both numbers are equal\n");
    return 0;
}

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
    return 0;
}
#include <stdio.h>
int main() {
    float num1, num2;
    char op;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch(op) {
        case '+': printf("Result = %.2f\n", num1 + num2); break;
        case '-': printf("Result = %.2f\n", num1 - num2); break;
        case '*': printf("Result = %.2f\n", num1 * num2); break;
        case '/': 
            if (num2 != 0) 
                printf("Result = %.2f\n", num1 / num2); 
            else 
                printf("Division by zero error!\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}



#include<stdio.h>
int main()
{
   int a,b;
   printf("enter a\t");
   scanf("%d",&a);
   printf("enter b\t");
   scanf("%d",&b);
   if(a>b)
   {
      printf(" a is greater than b");
   }
   else
   {
      printf("a is less than b");
   }
   return 0;
}