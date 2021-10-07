#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int up=0;
    int low =0;
    char x[100];
    scanf("%s",&x);

    for(int i=0;i<strlen(x);i++)
    {
        if(isupper(x[i]))
        {
            up++;
        }
        else if(islower(x[i]))
        {
            low++;
        }

    }
    printf("Upper = %d and Lower = %d",up,low);

    return 0;
}

