#include <stdio.h>

int main()
{
    int i; 
    printf("The odd numbers from 1 to 20 are:\n"); 
    for (i = 1; i <= 20; i++) 
    {
        if (i % 2 != 0) 
        {
            printf("%d ", i); 
        }
    }
    printf("\n"); 
    return 0; 
}
