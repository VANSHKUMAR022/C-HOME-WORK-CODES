#include<stdio.h>
void main()
{
    int a,b,big;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    big=a>b?a:b;
    printf("Greatest num=%d",big);
}