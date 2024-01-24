#include <stdio.h>

int quantity1(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%2 + quantity1(n>>1);
}

int main(void)
{
    int n;
    scanf("%d",&n);

    printf("%d\n",quantity1(n));
}