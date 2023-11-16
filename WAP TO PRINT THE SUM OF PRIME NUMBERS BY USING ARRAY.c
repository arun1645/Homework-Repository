 #include <stdio.h>
#include <math.h>
int isPrime(int n)
{

    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}

int main()
{
    int arr[100]; 
    int n; 
    int sum = 0; 
    int i; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    for (i = 0; i < n; i++)
    {
        if (isPrime(arr[i])) 
        {
            sum = sum + arr[i]; 
        }
    }

    printf("The sum of prime numbers in the array is %d\n", sum); 

    return 0;
}
