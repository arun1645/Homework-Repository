/*write a program to print the following pattern 
*
**
***
****
*****
*/
#include <stdio.h>

int main()
{
    int i, j, rows; // Declare variables to store the loop counters and the number of rows
    printf("Enter the number of rows: "); // Prompt the user to enter the number of rows
    scanf("%d", &rows); // Read the input from the user and store it in rows
    for (i = 1; i <= rows; i++) // Loop from 1 to rows
    {
        for (j = 1; j <= i; j++) // Loop from 1 to i
        {
            printf("*"); // Print a star
        }
        printf("\n"); // Print a new line after each row
    }
    return 0; // Return 0 to indicate successful execution
}
