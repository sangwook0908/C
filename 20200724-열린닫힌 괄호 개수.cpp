//¿­¸°/´İÈù °ıÈ£ °³¼ö 
#include <stdio.h>

int main(void)
{
    char array[1000];
    int b=0,c=0;
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(array[i] == '(')
        {
            b=b+1;
        }
        else if(array[i] == ')')
        {
            c=c+1;
        }
    }
    printf("%d %d",b,c);
    return 0;
}
