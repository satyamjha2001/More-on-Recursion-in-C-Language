#include<stdio.h>
int power(int,int);
int main() {
int a,b;
printf("Enter the number and its power: ");
scanf("%d%d",&a,&b);
printf("%d",power(a,b));
return 0;
}
int power(int a, int b)
{
    if(b==1)
    return a;
    else if(b==0)
    return 1;
    return(a*power(a,b-1));
}