#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    int i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum<<endl;
}
