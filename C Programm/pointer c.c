#include<stdio.h>
void fun(int *aa ,int *bb)
{
    int a=*aa + *bb;
    int b=*aa - *bb;
    printf("%d\n",a);
    printf("%d",b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        int t=a;
        a=b;
        b=t;
    }
    fun(&b,&a);
}
