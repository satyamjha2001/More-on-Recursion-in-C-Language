#include<stdio.h>
int sumOfSquares(int n)
{
    if(n==1)
    return 1;
    else
    {
        return ((n*n) + sumOfSquares(n-1));
    }
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d",&n);
printf("%d",sumOfSquares(n));
return 0;
}