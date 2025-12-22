#include <stdio.h>

int main()
{
    char str[81];
    int Tscore=0;
    int idx=0;
    int score=0;
    int count;
    scanf("%d",&count);

    for(int i=0; i<count; i++)
    {
        scanf("%s",str);
        Tscore=0;
        score=0;
        idx=0;
        while(str[idx]!='\0')
        {
            if(str[idx] == 'O')
            {
                Tscore+=1;
                score+=Tscore;
            }
            else
                {Tscore = 0;}
                idx++;
        }
            printf("%d\n",score);
    }
    return 0;
}