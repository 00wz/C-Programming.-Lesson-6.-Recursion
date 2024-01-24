#include <stdio.h>

int acounter(void)
{
    char c;
    if((c=getchar())=='.')
    {
        return 0;
    }
    if(c=='a')
    {
        return acounter()+1;
    }
    return acounter();
}

int main(void)
{
    printf("%d\n",acounter());
}