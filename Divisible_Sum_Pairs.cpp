#include<iostream>
using namespace std;
int main()
{
    int k,n,i,j,sum,c=0,x;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                sum=a[i]+a[j];
                x=sum%k;
                if(x==0)
                {
                    c++;
                }
            }
        }
    }
    cout<<c;
}
