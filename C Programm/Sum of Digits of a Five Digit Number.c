#include <stdio.h>
int main()
{
    int i,a,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
