#include <stdio.h>

int main()
{
    int i, sum = 0, square_sum = 0; 
    printf("The first five numbers are: "); 
    for (i = 1; i <= 5; i++) 
    {
        printf("%d ", i); 
        sum += i; 
        square_sum += (i * i);
    }
    
    printf("The sum of first five numbers is %d\n", sum); 
    printf("The sum of squares of first five numbers is %d\n", square_sum);
    return 0; 
}