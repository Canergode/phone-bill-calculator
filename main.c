#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float duration,bill;

    // Get call duration from user (in minutes)
    printf("Enter the call duration:\n");
    scanf("%f",&duration);

    // First 3 minutes are 4 TL flat rate
    // Each additional minute costs 1 TL
    if(duration<=3)
    {
        bill=4;
    }
    else
    {
        bill=4+(duration-3)*1;
    }

    // Print the result
    printf("Bill:%.2f TL",bill);
    return 0;
}
