#include <stdio.h>

void printDigitsForward(int n)
{
    if(n==0)
    {
        return;
    }
    printDigitsForward(n/10);
    printf("%d ", n%10);
}

int main(void)
{
    int n;
    scanf("%d",&n);

    printDigitsForward(n);
}