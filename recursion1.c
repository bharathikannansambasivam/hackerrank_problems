
#include <stdio.h>

int main()
{
    int n;
    printf("enter the n value");
    scanf("%d", &n);

    printf("%d", sum(n));
    return 0;
}

int sum(int n)
{
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}