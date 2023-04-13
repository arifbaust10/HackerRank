#include<iostream>
using namespace std;
int sum(int a[],int n)
{
    int i,k=0;
    for(i=0;i<n;i++)
    {
        k=k+a[i];
    }
    return k;
}
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    cout<<sum(ar,n);
}
