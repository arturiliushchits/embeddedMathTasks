#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(void)
{
    double alpha;
    double z1, z2;

    printf("Enter alpha (degrees): ");

    /* validation */
    if (scanf("%lf", &alpha) != 1)
    {
        printf("Error: please enter a number.\n");
        return 1;
    }

    /* convert to radians */
    double a = alpha * PI / 180.0;

    z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
    z2 = 4 * cos(a / 2) * cos(5 * a / 2) * cos(4 * a);

    printf("z1 = %.2f\n", z1);
    printf("z2 = %.2f\n", z2);

    return 0;
}