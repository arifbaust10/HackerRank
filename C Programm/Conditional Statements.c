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

int main()
{
    int n;
    scanf("%d",&n);
    if(n>9)
        printf("Greater than 9\n");
    else
        fun(n);

}
