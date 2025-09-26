#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int ex;
    
    scanf("%d",&ex);
    
    if(ex>=0 && ex<=100)
    {   
            if(ex>=90) 
                                                   
                printf("A\n");
            else if(ex>=80)
                printf("B\n");
            else if(ex>=70)
                printf("C\n");
            else if(ex>=60)
                printf("D\n");
            else
                printf("F\n");
            
    }
   
    return 0;
}
/*// if (90<=ex<=100) and your ex was 55 for example,
 c compiler reads it 54>=90->0 , 0 <=100-> True
  so you need logic operators like && to prevent those kind of Error*/