#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer between [7,10]:\n");
    scanf("%d",&a);
    while(a!=0)
    {
        if (a>7 && a<10)
        {
            printf("Result:%d\n", a);
            printf("Enter an integer between [7,10]:\n");
            scanf("%d",&a);
        }
        else
        {
            printf("Enter a new integer which is between [7,10]:\n");
            scanf("%d", &a);
        } 
    }
}
