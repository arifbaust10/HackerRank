#include <stdio.h>
void fun(int a)
{
    if(a==1)
        printf("one\n");
    else if(a==2)
        printf("two\n");
    else if(a==3)
        printf("three\n");
    else if(a==4)
        printf("four\n");
    else if(a==5)
        printf("five\n");
    else if(a==6)
        printf("six\n");
    else if(a==7)
        printf("seven\n");
    else if(a==8)
        printf("eight\n");
    else if(a==9)
        printf("nine\n");

}
void even_odd(int a)
{
    if(a%2==0)
        printf("even\n");
    else
        printf("odd\n");
}
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    int t=b;
    if(b>9)
    {
        b=9;
    }
    for(i=a;i<=b;i++)
    {
        fun(i);
        a=i;
    }
    for(i=a+1;i<=t;i++)
    {
        even_odd(i);
    }

    return 0;
}
