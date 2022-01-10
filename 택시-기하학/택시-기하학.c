#include <stdio.h>

int main()
{
    double r;
    const double PI = 3.1415926535897;
    
    scanf("%lf", &r);
    printf("%lf\n", r * r * PI);
    printf("%lf\n", r * r * 2.0);
    
    return 0;
}