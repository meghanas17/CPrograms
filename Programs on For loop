// Print numbers from 1 to 10
#include <stdio.h>
int main() {
  int i;
  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  return 0;
}


// Program to calculate the sum of first n natural numbers
#include <stdio.h>
int main()
{
    int num, count, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // for loop terminates when count exceeds num
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }
    printf("Sum = %d", sum);
    return 0;
}


//Program to check whether a number is Armstrong no or not
#include <stdio.h>
int main()
{
    int n, rem, temp, sum = 0;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    for(temp = n; temp != 0;)
    {
        rem = temp % 10;
        sum = sum + (rem* rem* rem);
        temp = temp /10;
    }
    if (sum == n && n != 0)
        printf("It is an Armstrong number");
    else
        printf("It is not an Armstrong number");
    return 0;
}



// Program to enter a number and check whether it is a prime number or not
#include <stdio.h>
int main()
{
    int n, i;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        break;
    }
    if (i == n && n >= 2)
        printf("It is a prime number");
    else
        printf("It is not a prime number");
    return 0;
}


// Program to print the Fibonacci series up to a given number
#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, temp;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    if(n >= 1)
    {
        printf("%d %d ", n1, n2);
        temp = n1 + n2;
        
        for(; temp <= n;)
        {
                printf("%d ", temp);
                n1 = n2;
                n2 = temp;
                temp = n1+n2;
        }
    }    
    else
        printf("please enter a number greater than zero");
}


//program to print the multiplication table for a given integer.
#include <stdio.h> .

void main() {
    int j, n; 

    printf("Input the number (Table to be calculated) : ");  
    scanf("%d", &n);  
    printf("\n"); 

    for (j = 1; j <= 10; j++) 
{ 
        printf("%d X %d = %d \n", n, j, n * j); 
    }
}



