#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int CA,ICA,diff;
    CA=a+b;
    ICA=a*b;
    diff=abs(ICA-CA);
    printf("%d",diff);
}
