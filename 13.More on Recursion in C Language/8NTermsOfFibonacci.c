 #include<stdio.h>    
void printFibonacci(int n){    
    static int a=0,b=1,c=0;    
    if(n>0){    
         printf("%d ",c);    
         a = b;    
         b = c;    
         c = a + b;    
         printFibonacci(n-1);    
    }    
}    
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    printFibonacci(n);
  return 0;  
 }