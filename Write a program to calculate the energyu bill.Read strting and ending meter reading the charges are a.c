#include <stdio.h>

int main()
{
    int start, end, units; 
    float rate, bill; 
    printf("Enter the starting meter reading: "); 
    scanf("%d", &start); 
    printf("Enter the ending meter reading: ");
    scanf("%d", &end); 
    units = end - start; 
    printf("The units consumed are %d\n", units);
 
    if (units > 200)
        rate = 3.50;
    else if (units > 100)
        rate = 2.50;
    else
        rate = 1.50;
    bill = units * rate; 
    printf("The energy bill is %.2f\n", bill); 
    return 0; 
}