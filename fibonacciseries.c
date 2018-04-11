#include<stdio.h>
long fib(long n)
{
    long a = 0, b = 1, c;
    int i;
    if( n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main ()
{
    long n;
    printf(" Input Number : ");
    scanf("%ld",&n);
    printf("\n Result :  %ld\n\n", fib(n));
    return 0;
}
