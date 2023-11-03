#include <stdio.h>

int main()
{
    int num, rev = 0, digit; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    for (; num > 0; num /= 10) 
    {
        digit = num % 10; 
        rev = rev * 10 + digit; 
    }
    printf("The reverse of the number is %d\n", rev); 
    return 0; 
}
