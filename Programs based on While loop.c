//Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops
#include <stdio.h>
int main() {
    int i = 0; 
    // First while loop: Print numbers from 0 to 10
    printf("Numbers from 0 to 10:\n");
    while (i <= 10) {
        printf("%d ", i); 
        i++;  
    }
    printf("\n"); 
    i = 10;  
  // Second while loop: Print numbers from 10 to 0
    printf("\nNumbers from 10 to 0:\n");
	while (i >= 0) {
        printf("%d ", i); 
        i--;  
    }
    return 0; 
}



//C program that calculates the sum of n-natural numbers
#include  <stdio.h> 
int main() {
    int num, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    i = 1;
    while (i  <= num) {
        sum = sum + i;
        i++;
    }
    printf("Sum: %d", sum);
    return 0;
}



//Program to print table for the given number using while loop in C
#include<stdio.h>  
int main(){    
int i=1,number=0,b=9;    
printf("Enter a number: ");    
scanf("%d",&number);    
while(i<=10){    
printf("%d \n",(number*i));    
i++;    
}    
return 0;  
}   



//C program to determine if a number entered by the user is a prime number or not.
#include <stdio.h>
int main() {
    int num, i = 2;
    int isPrime = 1; // Flag to determine if num is prime. 1 means prime, 0 means not prime.
    // Ask user for input
    printf("Enter a positive integer to check if it's prime: ");
    scanf("%d", &num);
    // Edge cases for 0, 1, and negative numbers
    if (num <= 1) {
        isPrime = 0;
    }
    // Check for prime number using a while loop
    while (i <= num / 2 && isPrime) {
        if (num % i == 0) {
            isPrime = 0;
        }
        i++;
    }
    // Output
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}


//Write a C program that calculates the product of numbers from 1 to 5 using a while loop
#include <stdio.h>
int main() {
    int number = 1;
    int product = 1;
    // Start a while loop to iterate from 1 to 5
    while (number <= 5) {
        product *= number;
        printf("Current number: %d, Current product: %d\n", number, product);
        number++;
    }
    return 0;  
}



//Write a C program to find and print the first 10 Fibonacci numbers using a while loop
#include <stdio.h>
int main() {
    int count = 10;       
    int firstTerm = 0, secondTerm = 1; 
    printf("First %d Fibonacci numbers:\n", count);
    while (count > 0) {
        printf("%d, ", firstTerm);
        int nextTerm = firstTerm + secondTerm;  
        firstTerm = secondTerm;  
        secondTerm = nextTerm;   
        count--; 
    }
    return 0; 
}



//Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.
#include <stdio.h>
int main() {
    int limit = 20;  // Specify the limit for even numbers
    int num = 2;     // Start with the first even number
    int sum = 0;     // Variable to store the sum of cubes
    // Start a while loop to iterate through even numbers up to the limit
    while (num <= limit) {
        // Calculate the cube of the current even number
        int cube = num * num * num;     
        // Add the cube to the sum
        sum += cube;
        // Move to the next even number
        num += 2;
    }
    // Print the sum of cubes of even numbers
    printf("Sum of cubes of even numbers up to %d: %d\n", limit, sum);
    return 0;  // Indicate successful program execution
}
