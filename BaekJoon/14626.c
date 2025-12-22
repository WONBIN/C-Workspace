#include<stdio.h>

int main()
{
   // 13자리 문자열을 받기 위해 NULL 문자를 포함할 수 있도록 크기를 14로 설정합니다.
   char isbn[14];
   scanf("%s", isbn);
   
   int star_index = -1;
   // '*' 문자의 위치를 찾습니다.
   for(int i = 0; i < 13; i++)
   {
      if(isbn[i] == '*')
      {
         star_index = i;
         break;
      }
   }
   
   int sum = 0;
   // '*'를 제외한 나머지 숫자들의 가중합을 계산합니다.
   for(int j = 0; j < 13; j++)
   {
      // '*' 문자는 건너뜁니다.
      if(j == star_index)
         continue;
      
      // 인덱스가 짝수이면 1을, 홀수이면 3을 곱합니다.
      if(j % 2 == 0)
      {
         sum += (isbn[j] - '0');
      }
      else
      {
         sum += (isbn[j] - '0') * 3;
      }
   }
   
   // 0부터 9까지의 숫자를 '*' 자리에 넣어보며 검증합니다.
   for(int k = 0; k < 10; k++)
   {
      int current_sum = sum;
      int weight = (star_index % 2 == 0) ? 1 : 3;
      if((current_sum + k*weight)%10==0)
      {
         printf("%d",k);
         break;
      }
      
  
} return 0;

}
