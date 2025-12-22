#include <stdio.h>
/*
int fibonacci(int n)
{
 if(n>=2)
    return fibonacci(n-1)+fibonacci(n-2);
 else if(n==1)
       return 1;
 else
       return 0;      
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d", fibonacci(n));
    return 0;
}*/

int fibo(int arr[],int n)
{
if(n==0)  return arr[0] = 0;      
if(n==1)  return  arr[1] = 1;
if(n==2)  return  arr[2] = 1;
arr[n] = fibo(arr,n-1) + fibo(arr,n-2);
return arr[n];
}

int main()
{

int arr[20];
int n;
scanf("%d",&n);
fibo(arr,n);
printf("%d",arr[n]);

return 0;
}


