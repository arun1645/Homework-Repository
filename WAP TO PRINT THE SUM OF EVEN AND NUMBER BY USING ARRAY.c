#include <stdio.h>
#define SIZE 10 

int main()
{
    int arr[SIZE]; 
    int even_sum = 0; 
    int odd_sum = 0; 
    int i; 

    printf("Enter %d elements of the array: \n", SIZE); 
    for(i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]); 
    }

    for(i = 0; i < SIZE; i++) 
    {
        if(arr[i] % 2 == 0) 
        {
            even_sum = even_sum + arr[i]; 
        }
        else 
        {
            odd_sum = odd_sum + arr[i]; 
        }
    }

    printf("The sum of even numbers in the array is %d\n", even_sum); 
    printf("The sum of odd numbers in the array is %d\n", odd_sum);

    return 0;
}

