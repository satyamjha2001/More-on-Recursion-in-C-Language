#include<stdio.h>
int hcf(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return hcf(b,a%b);
    }
}
int main() {
int a,b;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
printf("%d",hcf(a,b));
return 0;
}