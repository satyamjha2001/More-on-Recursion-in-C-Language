#include<stdio.h>
int sum(int n)
{
    if(n==2)
    return 2;
    else
    {
        return ((n) + sum(n-2));
    }
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d",&n);
printf("%d",sum(2*n));
return 0;
}