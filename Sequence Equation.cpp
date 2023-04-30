#include<bits/stdc++.h>
#include<vector>
using namespace std;
int fun(int k , int a[] , int n)
{
    {
        int i;
    for(i=0;i<n;i++)
    {
        if(k==a[i])
            return i+1;
    }
    }
    return -1;
}
int cal(int k, int a[] , int n)
{
    {
        int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
            return i+1;
    }
    }
    return -1;
}
int main()
{
    int n,i,k,m;
    cin>>n;
    int a[n];
    vector <int> b;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        m=cal(fun(i+1,a,n),a,n);
        b.push_back(m);
    }
    int len=b.size();
    for(i=0;i<len;i++)
    {
        cout<<b[i]<<endl;
    }
}
