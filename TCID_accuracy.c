#include<stdio.h>
int main ()
{
    long int t;
    int dizi[11];
    printf("Enter your TCKN: ");
    scanf("%ld", &t);
    for(int i=10;  i>=0; i--)
    {
        dizi[i]=t%10;
        t=(long int)t/10;
    }
    int a=((dizi[0]+dizi[2]+dizi[4]+dizi[6]+dizi[8])*7-(dizi[1]+dizi[3]+dizi[5]+dizi[7]))%10;
    int b=(dizi[0]+dizi[1]+dizi[2]+dizi[3]+dizi[4]+dizi[5]+dizi[6]+dizi[7]+dizi[8]+dizi[9])%10;
    if (a==dizi[9] && b==dizi[10])
    {
        printf("TCKN is right!\n");
    }
    else
    {
        printf("TCKN is false!\n");
    }
    return 0;
}
