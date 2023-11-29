#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main(){
    int x=5;
    int res = fib(x);
    printf("%d\n",res);
    return 0;
}