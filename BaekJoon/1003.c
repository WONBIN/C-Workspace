#include <stdio.h>
int fibo(int n, int arr[])
{
    if(n==0) return arr[0] = 0;
    if(n==1) return arr[1] = 1;
    if(n==2) return arr[2] = 1;
    arr[n] = fibo(n-1,arr) + fibo(n-2,arr);
     
}

int main()
{


    return 0;
}