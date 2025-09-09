#include <stdio.h>
#include <stdlib.h>

void foo();

int main()
{/*
    static int k = 10;
    int i = 10;
{
    int i = 30;
    printf("Block i:%d\n",i);
}
    printf("Local i: %d\n",i);
    foo();
    printf("Global k: %d\n",i);
    */
int i = 300;
char c = (char)i;
printf("c:%c\n",c);
    return 0;
}

void foo()
{
    int i = 20;
    printf("[foo]Local i: %d\n",i);
}