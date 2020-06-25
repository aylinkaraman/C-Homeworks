#include <stdio.h>
#include <math.h>
double f(double x)
{
    return 1/x;
}
int main()
{
    int N;
    double a,b;
    printf("Enter a lower bound: ");
    scanf("%lf", &a);
    printf("Enter an upper bound: ");
    scanf("%lf", &b);
    printf("Enter a number: ");
    scanf("%d", &N);
    double h[N], R[N][N];
    for (int i = 0; i < N + 1; ++i) 
    {
        h[i] = (b - a) / pow(2, i);
    }
    R[0][0] = (h[0] / 2) * (f(a) + f(b));
    for (int i = 1; i < N + 1; ++i) 
    {
        double sum = 0;
        for (int k = 1; k <= pow(2, i - 1); ++k) 
        {
            sum += f(a + (2 * k -1) * h[i]);
        }
        R[i][0] = 0.5 * R[i - 1][0] + h[i] * sum;
    }
    for (int i = 1; i < N + 1; ++i) 
    {
        for (int j = 1; j <= i; ++j) 
        {
            R[i][j] = R[i][j - 1] + (R[i][j-1] - R[i-1][j-1]) / (pow(4,j) - 1);
        }
    }
    printf("Result: %lf", R[N][N]);
}
