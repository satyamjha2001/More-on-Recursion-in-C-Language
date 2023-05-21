#include <stdio.h>
int digits(int n,int count)
{
    if (n == 0)
        printf("%d", count);
    else
    {
        count++;
        digits(n / 10,count);
    }
}
int main()
{
    int n,count=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    digits(n,count);
    return 0;
}