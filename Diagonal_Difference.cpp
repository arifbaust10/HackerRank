
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c,sum1=0,sum2=0,sum=0;
    cin>>n;
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==0)
            c=n-1;
        for(j=0; j<n; j++)
        {
            if(i==j)
                sum1=sum1+a[i][j];
            if(j==c)
                sum2=sum2+a[i][j];
        }
        c--;
    }
    sum=sum1-sum2;
    cout<<abs(sum);
}
