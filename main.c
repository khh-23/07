#include <stdio.h>

void f(void);

int i;
int main(void)
{
    for (i=0;i<5;i++)
    {
        f();
    }
    return 0;
}

void f(void)
{   
    int j;
    for (j=0;j<10;j++)
        printf("#");
}
