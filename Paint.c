#include <stdio.h>
#include <math.h>

int main()
{
    int canvas = 40;
    int colors;
    scanf("%d", &colors);

    int total = (colors*5) + canvas;

    double tax = total/10.0;
    double final = tax + total;

    int a = ceil(final);

    printf("%d", a);

    return 0;
}