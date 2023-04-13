#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a[5],j,i,max=0,min=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    sort(a,a+5);
    for(i=0,j=4;i<4,j>0;i++,j--)
    {
        min=min+a[i];
        max=max+a[j];
    }
    cout<<min<<" "<<max<<endl;
}
