#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int mark[100],a, i;

    printf("How much value you want to Input? = ");
    scanf("%d", &a);

    for(i=0; i<a; i++)
    {
        scanf("%d", &mark[i]);
    }

    printf("You've Entred These Numbers : ");

    for(i=0; i<a; i++)
    {
        printf("%d, ", mark[i]);
    }



    getch();
    return 0;
}
