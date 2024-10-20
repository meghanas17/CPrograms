// C program to print the full pyramid pattern of stars
#include <stdio.h>
int main()
{
    int rows = 5;
    // first loop to print all rows
    for (int i = 0; i < rows; i++) {
        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }
        // inner loop 2 to print star * character
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

Output:

         *             
       * * *        
     * * * * *     
   * * * * * * *    
 * * * * * * * * * 






// C program to print the full pyramid pattern of alphabets
#include <stdio.h>
int main()
{
    int rows = 5;
    // first loop to print all rows
    for (int i = 0; i < rows; i++) {

        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }
        // inner loop 2 to print alphabets
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}    
Output:

              A
            A B C
          A B C D E
        A B C D E F G
      A B C D E F G H I
            



// C program to print the full pyramid pattern of numbers
#include <stdio.h>
int main()
{
    int rows = 5;
    // first loop to print all rows
    for (int i = 0; i < rows; i++) {

        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }
        // inner loop 2 to print star numbers
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}
Output:

           1         
         1 2 3     
       1 2 3 4 5    
     1 2 3 4 5 6 7    
   1 2 3 4 5 6 7 8 9   
