#include <stdio.h>
#include <math.h>

int main()
{
    int points, price;
    scanf("%d %d", &points, &price);

    if (points/12 >= price)
    {
        printf("Buy it!");
    }
    else
    {
        printf("Try again");
    }
    
    return 0;
}