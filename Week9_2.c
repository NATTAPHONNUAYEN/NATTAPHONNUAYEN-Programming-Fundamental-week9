#include<stdio.h>
int main()
{
    int up=0;
    int low =0;
    char x[100];
    char *p;
    p = x;
    scanf("%s",&x);

    while(*p !=0)
    {
        if(*p>=65&&*p<=90)
        {
            up++;
        }
        else if(*p>=97&&*p<=122)
        {
            low++;
        }
        p++;
    }
    printf("Upper = %d and Lower = %d",up,low);

    return 0;
}
