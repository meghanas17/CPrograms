//write a simple program that questions the user for a password and keeps asking until the right password is input.
#include <stdio.h>  
#include <string.h>  
int main() {  
char password[] = "secret";  
char input[20];  
do {  
printf("Enter the password: ");  
scanf("%s", input);  
} while (strcmp(input, password) != 0);  
printf("Access granted!\n");  
return 0;  
}  


//Program to print numbers from 1 to 5:
#include <stdio.h>  
int main() {  
inti = 1;  
do {  
printf("%d\n", i);  
i++;  
} while (i<= 5);  
return 0;  
}  



//C program to print all the even numbers from 10 to 20 on the screen using do while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i=10;
    do
    {
        printf("%d\n",i);
        i=i+2;
    }
    while(i<=20);
    return 0;
}



//Program to print table for the given number using do while Loop
#include<stdio.h>  
intmain()
{   
inti=1,number=0;   
printf("Enter a number: ");   
scanf("%d",&number);   
do{  
printf("%d \n",(number*i));   
i++;   
}while(i<=10);   
return 0;   
}  



//program that prints the multiplication table of a given number N using a do...while Loop:
#include <stdio.h>  
int main() {  
int N;  
printf("Enter a number to generate its multiplication table: ");  
scanf("%d", &N);  
inti = 1;  
do {  
printf("%d x %d = %d\n", N, i, N * i);  
i++;  
} while (i<= 10);  
return 0;
}



//C program to print all the numbers from 10 to 1 in reverse order on the screen using do while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i=10;
    do
    {
        printf("%d\n",i);
        i=i-1;
    }
    while(i>=1);
    return 0;
}



//Basic Execution Of Do-while Loop In C (5 iterations)
#include <stdio.h>
int main() {
//Initializing a variable i with 0.
int i=0;
// starting of execution of do-while loop in C
do{
printf("Believe in Yourself!!!\n"); // Code inside the body of Loop
i=i+1; // incrementing the variable i by 1 on each iteration

}while(i<5); // Execution of the loop till i is less than 5.

return 0;
}



//C program to input a 4-digit number and find the sum of its digits using do while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
    int n,r,sd=0;
    printf("Enter a 4 digit number ");
    scanf("%d",&n);
    if(n>=1000 && n<=9999)
    {
        do
        {
            r=n%10;     // return the last digit of the number as remainder
            sd=sd+r;
            n=n/10;     // removes the last digit of the number
        }
        while(n>0);
        printf("Sum of digits = %d",sd);
    }
    else
    {
        printf("Not a 4 digit number");
    }
    return 0;
}
