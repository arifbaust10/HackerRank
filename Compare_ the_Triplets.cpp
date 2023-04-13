#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],c[2],i,ali=0,bol=0;

    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            ali++;
        if(b[i]>a[i])
            bol++;
    }
    c[0]=ali;
    c[1]=bol;
    cout<<c[0]<<" "<<c[1];
}

