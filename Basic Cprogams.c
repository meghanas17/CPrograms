// C Hello World Program
#include <stdio.h>
int main()
{
 printf(“Hello, World!\n”);
 return 0;
}


//C Program to Print an Integer Entered By the User
#include <stdio.h>
int main() 
{
 int num;
 printf(“Enter an integer: “);
 scanf(“%d”, &num);
 printf(“You entered: %d\n”, num);
 return 0;
}


//C Program to Check Whether Number is Even or Odd
#include <stdio.h>
int main() 
{
 int num;
 printf(“Enter a number: “);
 scanf(“%d”, &num);
 if (num % 2 == 0)
 printf(“Even number\n”);
 else
 printf(“Odd number\n”);
 return 0;
}


//C Program to Check Whether a Number is Prime or Not
#include <stdio.h>
int main() 
{
 int num, i, flag = 0;
 printf(“Enter a number: “);
 scanf(“%d”, &num);
 for (i = 2; i <= num / 2; ++i) {
 if (num % i == 0) {
 flag = 1;
 break;
 }
 }
 if (flag == 0)
 printf(“%d is a prime number.\n”, num);
 else
 printf(“%d is not a prime number.\n”, num);
 return 0;
 }


//C Program to Print the ASCII Value of a Character
#include <stdio.h>
int main()
{
 char ch;
 printf(“Enter a character: “);
 scanf(“%c”, &ch);
 printf(“ASCII value of %c = %d\n”, ch, ch);
 return 0;
}


//C Program to Swap Two Numbers
#include <stdio.h>
int main()
{
 int num1, num2, temp;
 printf(“Enter two numbers: “);
 scanf(“%d %d”, &num1, &num2);
 temp = num1;
 num1 = num2;
 num2 = temp;
 printf(“After swapping: num1 = %d, num2 = %d\n”, num1, num2);
 return 0;
}


//C Program to Calculate Fahrenheit to Celsius
#include <stdio.h>
int main()
{
 float fahrenheit, celsius;
 printf(“Enter temperature in Fahrenheit: “);
 scanf(“%f”, &fahrenheit);
 celsius = (fahrenheit – 32) * 5 / 9;
 printf(“Temperature in Celsius: %f\n”, celsius);
 return 0;
}


//C Program to Check Whether a Number is Positive, Negative, or Zero
#include <stdio.h>
int main()
{
 int num;
 printf(“Enter a number: “);
 scanf(“%d”, &num);
 if (num > 0)
 printf(“Positive number\n”);
 else if (num < 0)
 printf(“Negative number\n”);
 else
 printf(“Zero\n”);
 return 0;
}


//C Program to Print Alphabets From A to Z Using Loop
#include <stdio.h>
int main() 
{
 char ch;
 printf(“Alphabets from A to Z:\n”);
 for (ch = ‘A’; ch <= ‘Z’; ++ch) {
 printf(“%c “, ch);
 }
 return 0;
}


//Calculate the Largest of 3 numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("Biggest number is %d", a);
    if (b > a && b > c)
        printf("Biggest number is %d", b);
    if (c > a && c > b)
        printf("Biggest number is %d", c);
    return 0;
}


//Print Multiplication table of input number
#include<stdio.h>
int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n,i;
    printf("Enter an integer you need to print the table of: ");
    scanf("%d", &n);
    printf("\n\n\n");
    for(i = 1; i <= 10; i++)
    {
        printf("\n\t\t\t%d * %d   =   %d \n", n, i, n*i);
    }
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}


//Simple C Program to reverse the case of input 
#include<stdio.h>
#include<ctype.h> 
int main()
{
char alpha;
printf(“Enter an alphabet : “);
putchar(‘\n’); 
alpha=getchar();
printf(“\n\nReverse case of %c is : “,alpha);
if(islower(alpha)) //Check if it is in lowercase 
putchar(toupper(alpha));
else
printf(“%c”,tolower(alpha)) ;
return 0;
}


//Simple C Program to find factorial of a number
#include<stdio.h>
void main()
{
int i, n;
long int fact = 1;
printf(“Enter a number of your choice: “);
scanf(“%d” , &n);
for(i = 1; i <= n; i++)
{
fact = fact * i;
}
printf(“Factorial of number %d is %ld”, n , fact);
}


//Simple C Program to print sum of n numbers
#include<stdio.h>
int main()
{
int n, sum = 0, i, array[100];
printf(“Enter the number of integers to add: “);
scanf(“%d”, &n);
printf(“\n\nEnter %d integers \n\n”, n);
for(i = 0; i< n; i++)
{
scanf(“%d”, &array[i]);
sum += array[i]; // same as sum = sum + array[c]
}
printf(“\n\nSum = %d\n\n”, sum);
return 0;
}


// Fibonacci Series
#include <stdio.h>
int main() {
  int i, n;
  // initialize first and second terms
  int t1 = 0, t2 = 1;
  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;
  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}



//Program to Check whether a given number is Palindrome or not
#include <stdio.h>
int main() 
{
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    return 0;
}



//Program to Check whether a given string is Palindrome or not
#include <stdio.h>
#include <string.h>
int main() {
    char string1[20];
    int i, length;
    int flag = 0;
    printf("Enter a string: ");
    scanf("%s", string1);
    length = strlen(string1);
    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("%s is not a palindrome\n", string1);
    } else {
        printf("%s is a palindrome\n", string1);
    }
    return 0;
}
