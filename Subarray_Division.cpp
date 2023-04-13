
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m,c=0,i,j,k,sum=0;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>d>>m;
    for(i=0;i<n;i++)
    {
        k=i;
        sum=0;
        if(i!=n-m+1)
        {
         for(j=0;j<m;j++)
         {
            sum=sum+s[k];
            k++;
         }
        }
        if(sum==d)
        {
         c++;
        }
    }
    cout<<c;
}

