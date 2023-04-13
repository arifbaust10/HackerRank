#include <bits/stdc++.h>
using namespace std;
int can_max(int a[],int n)
{
    int i,c=0;
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(a[n-1]==a[i])
        {
           c++;
        }
        else
        {
            break;
        }
    }
    return c;
}
int main()
{
    int i,n,max;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=can_max(a,n);
    cout<<max;

}
