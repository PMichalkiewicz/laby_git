#include <stdio.h>
int policz(int a, int b)
{
    return a*b;
}
int main(void)
{
    printf("Hello, World!\n");
    printf("W drugim branchu: 2*3 = %d", policz(2, 3));
    return 0;
}
