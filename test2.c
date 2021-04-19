#include <stdio.h>
int fibonacci(int);
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", fibonacci(x));
    return 0;
}
int fibonacci(int n)
{
    int result;
    if (n == 0)
        result = 0;
    if (n == 1)
        result = 1;
    else
        result = fibonacci(n - 1) + fibonacci(n - 2);
    return result;
}