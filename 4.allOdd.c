#include <stdio.h>

void allOdd(void)
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        return;
    }
    if(n%2!=0)
    {
        printf("%d ",n);
    }
    allOdd();
}

int main(void)
{
    allOdd();
}