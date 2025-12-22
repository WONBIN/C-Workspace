#include <stdio.h>

int main()
{
int min = 1;
int con;
int arr[9];
 for(int i=0;i<9; i++)
 {
    scanf("%d",&arr[i]);
 }
 for(int j=0; j<9; j++)
 {
    if(arr[j]>min)
    {
        min = arr[j];
        con = j+1; // index가 0 이니까 ㅋㅋㅋㅋㅋㅋ 이놈아 
    }
 } 
 printf("%d\n",min);
 printf("%d",con);


 return 0;
}