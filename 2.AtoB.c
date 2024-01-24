#include <stdio.h>

void AtoB(int A, int B)
{
    printf("%d ", A);
    if(A<B)
    {
        AtoB(A+1,B);
        return;
    }
    if(A>B)
    {
        AtoB(A-1, B);
    }
}

int main(void)
{
    int A,B;
    scanf("%d%d",&A,&B);

    AtoB(A,B);
}